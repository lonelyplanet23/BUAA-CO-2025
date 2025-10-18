/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/pre_verilog/test_learning/expr_tb.v";
static const char *ng1 = "expr_tb.vcd";
static int ng2[] = {0, 0};
static const char *ng3 = "==== Expr FSM Testbench ====";
static int ng4[] = {1, 0};
static const char *ng5 = "\n==== Test 1: 1+2 ====";
static int ng6[] = {49, 0};
static int ng7[] = {43, 0};
static int ng8[] = {50, 0};
static const char *ng9 = "\n==== Test 2: 1++2 ====";
static const char *ng10 = "\n==== Test 3: +2 ====";
static const char *ng11 = "\n==== Test 4: 12 ====";
static const char *ng12 = "\n==== Test 5: 1*3+5 ====";
static int ng13[] = {42, 0};
static int ng14[] = {51, 0};
static int ng15[] = {53, 0};
static const char *ng16 = "\n==== Testbench Finished ====";



static int sp_send_char(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t1 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static void Always_43_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1880);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_55_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    xsi_vcd_dumpfile(ng1);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}

static void Initial_61_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);

LAB4:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB8:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB14:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB16:    if (t15 != 0)
        goto LAB17;

LAB12:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB13:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB20:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB22:    if (t15 != 0)
        goto LAB23;

LAB18:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB19:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(79, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB20;
    goto LAB1;

LAB24:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB28:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB30:    if (t15 != 0)
        goto LAB31;

LAB26:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB27:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB34:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB36:    if (t15 != 0)
        goto LAB37;

LAB32:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB33:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB40:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB42:    if (t15 != 0)
        goto LAB43;

LAB38:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB39:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB46:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB48:    if (t15 != 0)
        goto LAB49;

LAB44:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB45:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB29:;
LAB31:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB34;
    goto LAB1;

LAB41:;
LAB43:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB40;
    goto LAB1;

LAB47:;
LAB49:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4112);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB54:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB56:    if (t15 != 0)
        goto LAB57;

LAB52:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB53:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB60:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB62:    if (t15 != 0)
        goto LAB63;

LAB58:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB59:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB55:;
LAB57:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB54;
    goto LAB1;

LAB61:;
LAB63:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB60;
    goto LAB1;

LAB64:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB68:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB70:    if (t15 != 0)
        goto LAB71;

LAB66:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB67:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB74:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB76:    if (t15 != 0)
        goto LAB77;

LAB72:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB73:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB69:;
LAB71:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB74;
    goto LAB1;

LAB78:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB82:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB84:    if (t15 != 0)
        goto LAB85;

LAB80:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB81:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB88:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB90:    if (t15 != 0)
        goto LAB91;

LAB86:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB87:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB94:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB96:    if (t15 != 0)
        goto LAB97;

LAB92:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB93:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB100:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB102:    if (t15 != 0)
        goto LAB103;

LAB98:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB99:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3584);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB106:    t7 = (t0 + 3680);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB108:    if (t15 != 0)
        goto LAB109;

LAB104:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB105:    t16 = (t0 + 3680);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3584);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(112, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB83:;
LAB85:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB82;
    goto LAB1;

LAB89:;
LAB91:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB88;
    goto LAB1;

LAB95:;
LAB97:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB94;
    goto LAB1;

LAB101:;
LAB103:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB100;
    goto LAB1;

LAB107:;
LAB109:    t7 = (t0 + 3776U);
    *((char **)t7) = &&LAB106;
    goto LAB1;

LAB110:    xsi_set_current_line(114, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000001074140855_1286836147_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Initial_55_1,(void *)Initial_61_2};
	static char *se[] = {(void *)sp_send_char};
	xsi_register_didat("work_m_00000000001074140855_1286836147", "isim/expr_tb_isim_beh.exe.sim/work/m_00000000001074140855_1286836147.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
