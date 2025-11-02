import random
import subprocess

class MIPSTestGenerator:
    def __init__(self, output_asm="test.asm", mars_path="mars.jar"):
        self.output_asm = output_asm
        self.mars_path = mars_path
        self.asm_code = []
        self.data_ptr = "$t0"  # Memory storage pointer register
        self.init_code()

    def init_code(self):
        """Initialize: set data segment, initialize registers to non-zero values, initialize storage pointer"""
        self.asm_code.extend([
            ".data",
            ".text",
            ".globl main",
            "main:",
            # Initialize 31 registers to non-zero values ($0 is always 0)
            "ori $t1, $0, 0x1234",   # $t1 = 0x1234
            "ori $t2, $0, 0x5678",   # $t2 = 0x5678
            "ori $t3, $0, 0x9abc",   # $t3 = 0x9abc
            "ori $t4, $0, 0xdef0",    # $t4 = 0xdef0
            # ... Omitted partial register initialization (can be supplemented to $31)
            # Initialize storage pointer (starting from 0x0)
            "ori %s, $0, 0x0" % self.data_ptr,
        ])

    def add_comment(self, comment):
        """Add comment"""
        self.asm_code.append(f"# {comment}")

    def save_result(self, reg):
        """Store register value to memory and update pointer"""
        self.asm_code.extend([
            f"sw {reg}, 0({self.data_ptr})",  # Store result
            f"addi {self.data_ptr}, {self.data_ptr}, 4"  # Pointer +4
        ])

    def generate_arithmetic_tests(self):
        """Generate arithmetic instruction tests (add, sub, ori, lui)"""
        self.add_comment("===== Arithmetic instruction tests =====")
        
        # Test data: register values (near 0, 32-bit boundaries, random numbers)
        reg_values = [
            0, -2, -1, 1, 2,
            -2147483648, -2147483647, 2147483646, 2147483647,
            -1000786109, 1919156834
        ]
        # Unsigned immediates (near 0, 16-bit boundaries, random numbers)
        unsigned_imms = [0, 1, 2, 3, 65533, 65534, 65535, 25779, 42528]
        # Signed immediates (near 0, 16-bit boundaries, random numbers)
        signed_imms = [-2, -1, 0, 1, 2, -32768, -32767, 32766, 32767, -5329, 25299]

        # 1. ori instruction test (zero extension)
        self.add_comment("ori test")
        for imm in unsigned_imms:
            self.asm_code.append(f"ori $t5, $0, {imm}")  # $t5 = imm (zero extension)
            self.save_result("$t5")
        # Test target register as $0 (should be invalid)
        self.asm_code.append("ori $0, $t1, 0xffff")  # Attempt to write to $0
        self.save_result("$0")  # Expected to remain 0

        # 2. lui instruction test (high bit loading)
        self.add_comment("lui test")
        for imm in [0x1234, 0x8000, 0xffff] + signed_imms:  # Including cases with sign bit 1
            self.asm_code.append(f"lui $t6, {imm}")  # High 16 bits = imm, low 16 bits = 0
            self.save_result("$t6")
            # Supplement low 16 bits
            self.asm_code.append(f"ori $t6, $t6, 0x7890")
            self.save_result("$t6")

        # 3. add instruction test (positive+positive, positive+negative, negative+negative, including boundaries)
        self.add_comment("add test")
        test_pairs = [
            (1, 2), (-1, -2), (2147483647, 1),  # Positive overflow
            (-2147483648, -1),  # Negative overflow
            (-1000786109, 1919156834)
        ]
        for a, b in test_pairs:
            self.asm_code.append(f"li $t7, {a}")
            self.asm_code.append(f"li $t8, {b}")
            self.asm_code.append("add $t9, $t7, $t8")
            self.save_result("$t9")

        # 4. sub instruction test
        self.add_comment("sub test")
        for a, b in test_pairs:
            self.asm_code.append(f"li $s0, {a}")
            self.asm_code.append(f"li $s1, {b}")
            self.asm_code.append("sub $s2, $s0, $s1")
            self.save_result("$s2")

    def generate_load_store_tests(self):
        """Generate load/store instruction tests (lw, sw): random registers, random addresses"""
        self.add_comment("\n===== Randomized lw/sw tests =====")
        
        # General register list (exclude $0 as base and source registers, $0 can be used as target for testing)
        general_regs = [f"${i}" for i in range(1, 32)]  # $1-$31
        target_regs = general_regs + ["$0"]  # Target registers can include $0
        
        # DM address range: 0x0000 - 0x2fff (ensure no out-of-bounds)
        dm_min = 0x0000
        dm_max = 0x2fff
        
        # Generate 10 random test groups (adjustable quantity)
        for _ in range(10):
            # Randomly select registers
            base_reg = random.choice(general_regs)  # Base register (non-$0)
            data_reg = random.choice(general_regs)  # Register for storing data
            load_reg = random.choice(target_regs)   # Load target register (may be $0)
            
            # Randomly generate base value (ensure base is in reasonable range to avoid offset out-of-bounds)
            base = random.randint(dm_min - 0x1000, dm_max)  # Allow base to be negative, but combined with offset must be legal
            
            # Randomly generate offset (16-bit signed range: -32768 ~ 32767)
            offset = random.randint(-32768, 32767)
            
            # Calculate actual address, ensure it's within DM range (skip this group if not)
            addr = base + offset
            if not (dm_min <= addr <= dm_max):
                continue  # Address out of bounds, skip
            
            # Randomly generate non-zero byte data (each byte is non-zero)
            non_zero_data = 0
            while non_zero_data == 0:
                # Ensure each byte (8 bits) is non-zero: 0x01010101 ~ 0xfefefefe
                non_zero_data = random.randint(0x01010101, 0xfefefefe)
            
            # Generate test instructions
            self.add_comment(f"Random test: base_reg={base_reg}, base={hex(base)}, offset={offset}, address={hex(addr)}")
            self.asm_code.append(f"li {base_reg}, {base}")  # Set base register
            self.asm_code.append(f"li {data_reg}, 0x{non_zero_data:x}")  # Load non-zero data
            self.asm_code.append(f"sw {data_reg}, {offset}({base_reg})")  # Store
            self.asm_code.append(f"lw {load_reg}, {offset}({base_reg})")  # Load
            self.save_result(load_reg)  # Save load result (verify correctness)

    def generate_branch_jump_tests(self):
        """Generate branch/jump instruction tests (beq, j): random registers, random target positions"""
        self.add_comment("\n===== Randomized beq/j tests =====")
        
        # General register list ($1-$31)
        general_regs = [f"${i}" for i in range(1, 32)]
        # Result storage registers ($1-$31)
        result_regs = general_regs
        
        # Generate beq tests (5 groups)
        for i in range(5):
            # Randomly select comparison registers and result register
            reg_a = random.choice(general_regs)
            reg_b = random.choice(general_regs)
            res_reg = random.choice(result_regs)
            
            # Randomly determine comparison result (equal/unequal)
            is_equal = random.choice([True, False])
            val_a = random.getrandbits(32)  # Random 32-bit value
            val_b = val_a if is_equal else random.getrandbits(32)  # Same value if equal, different otherwise
            
            # Randomly generate jump target label (ensure uniqueness)
            target_label = f"beq_target_{i}"
            end_label = f"beq_end_{i}"
            
            self.add_comment(f"beq test {i}: {reg_a}={hex(val_a)}, {reg_b}={hex(val_b)}, {'jump if equal' if is_equal else 'no jump if not equal'}")
            self.asm_code.extend([
                f"li {reg_a}, 0x{val_a:x}",
                f"li {reg_b}, 0x{val_b:x}",
                f"beq {reg_a}, {reg_b}, {target_label}",
                # Execute if not jumping (store random value)
                f"li {res_reg}, 0x{random.getrandbits(32):x}",
                f"j {end_label}",
                f"{target_label}:",
                # Execute if jumping (store another random value)
                f"li {res_reg}, 0x{random.getrandbits(32):x}",
                f"{end_label}:",
            ])
            self.save_result(res_reg)  # Save result (verify jump logic)
        
        # Generate j instruction tests (3 groups)
        for i in range(3):
            # Randomly select result register
            res_reg = random.choice(result_regs)
            # Randomly generate jump target label
            target_label = f"j_target_{i}"
            # Randomly determine target position (before/after instruction)
            is_forward = random.choice([True, False])
            
            self.add_comment(f"j {i}: {'forward jump' if is_forward else 'backward jump'}")
            if not is_forward:
                # Backward jump (target before instruction)
                self.asm_code.append(f"{target_label}:")  # Place target label before
            self.asm_code.extend([
                f"j {target_label}",
                # Instructions that won't execute after jump (store random value)
                f"li {res_reg}, 0x{random.getrandbits(32):x}",
            ])
            if is_forward:
                # Forward jump (target after instruction)
                self.asm_code.append(f"{target_label}:")  # Place target label after
            # Instructions that execute after jump (store another random value)
            self.asm_code.append(f"li {res_reg}, 0x{random.getrandbits(32):x}")
            self.save_result(res_reg)  # Save result (verify jump effectiveness)

    def generate_exit(self):
        """Program exit (for Mars simulation)"""
        self.asm_code.extend([
            "li $v0, 10",
            "syscall"
        ])

    def generate(self):
        """Generate complete test program"""
        self.generate_arithmetic_tests()
        self.generate_load_store_tests()
        self.generate_branch_jump_tests()
        self.generate_exit()
        # Write to file
        with open(self.output_asm, "w") as f:
            f.write("\n".join(self.asm_code))
        print(f"Test program generated: {self.output_asm}")

    def generate_machine_code(self, output_bin="test.bin"):
        """Call Mars to generate machine code (requires Java environment)"""
        try:
            # Mars command line parameters: load asm, export machine code to bin
            cmd = [
                "java", "-jar", self.mars_path,
                self.output_asm,
                "-dump", "bin", output_bin,
                "-noconsole"
            ]
            subprocess.run(cmd, check=True)
            print(f"Machine code generated: {output_bin}")
        except Exception as e:
            print(f"Failed to generate machine code: {e}")


if __name__ == "__main__":
    # Generate test program
    generator = MIPSTestGenerator(output_asm=".\\P3\\auto_test\\test.asm")
    generator.generate()
    # Optional: generate machine code (need correct Mars path configuration)
    # generator.generate_machine_code()