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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/MDU_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "Testing Signed Mult: -2 * 3";
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {6, 0};
static const char *ng8 = "  -> Mult Pass! Result: %d, Busy released.";
static const char *ng9 = "  -> Mult Fail! LO: %h, Busy: %b";
static const char *ng10 = "Testing Unsigned Div: 10 / 3";
static int ng11[] = {10, 0};
static unsigned int ng12[] = {3U, 0U};
static const char *ng13 = "  -> Divu Pass! LO: %d, HI: %d";
static const char *ng14 = "  -> Divu Fail! LO: %d, HI: %d";
static const char *ng15 = "Testing Signed Div: -10 / 3";
static unsigned int ng16[] = {2U, 0U};
static const char *ng17 = "  -> Div Pass! Result correct.";
static const char *ng18 = "  -> Div Fail! LO: %d, HI: %d";
static const char *ng19 = "Testing MTHI / MTLO";
static unsigned int ng20[] = {305419896U, 0U};
static unsigned int ng21[] = {4U, 0U};
static unsigned int ng22[] = {2271560481U, 0U};
static unsigned int ng23[] = {5U, 0U};
static const char *ng24 = "  -> MTxx Pass!";
static const char *ng25 = "  -> MTxx Fail! HI: %h, LO: %h";



static void Always_60_0(char *t0)
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2248);
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
    t24 = (t0 + 2248);
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

static void Initial_62_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t21[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t97[8];
    char t120[8];
    char t128[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(80, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB12;

LAB9:    if (t17 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t5) = 1;

LAB12:    memset(t21, 0, 8);
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t22) != 0)
        goto LAB15;

LAB16:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB17;

LAB18:    memcpy(t59, t21, 8);

LAB19:    t91 = (t59 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t59);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t3, 32, (char)118, t6, 1);

LAB33:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB11:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    t33 = (t0 + 1368U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB23;

LAB20:    if (t47 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t35) = 1;

LAB23:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t52) != 0)
        goto LAB26;

LAB27:    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t21 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t51) = 1;
    goto LAB27;

LAB26:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB27;

LAB28:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t21 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t21);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB30;

LAB31:    xsi_set_current_line(91, ng0);
    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)119, t99, 32);
    goto LAB33;

LAB34:    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 110000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB40;

LAB37:    if (t17 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t4) = 1;

LAB40:    memset(t5, 0, 8);
    t22 = (t4 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t22) != 0)
        goto LAB43;

LAB44:    t29 = (t5 + 4);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB45;

LAB46:    memcpy(t51, t5, 8);

LAB47:    memset(t59, 0, 8);
    t91 = (t51 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t51);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t91) != 0)
        goto LAB61;

LAB62:    t99 = (t59 + 4);
    t100 = *((unsigned int *)t59);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB63;

LAB64:    memcpy(t128, t59, 8);

LAB65:    t160 = (t128 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t128);
    t164 = (t163 & t162);
    t165 = (t164 != 0);
    if (t165 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)118, t3, 32, (char)118, t6, 32);

LAB79:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB39:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t5) = 1;
    goto LAB44;

LAB43:    t28 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB44;

LAB45:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB51;

LAB48:    if (t47 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t21) = 1;

LAB51:    memset(t35, 0, 8);
    t52 = (t21 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t21);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t52) != 0)
        goto LAB54;

LAB55:    t60 = *((unsigned int *)t5);
    t61 = *((unsigned int *)t35);
    t62 = (t60 & t61);
    *((unsigned int *)t51) = t62;
    t63 = (t5 + 4);
    t64 = (t35 + 4);
    t65 = (t51 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB50:    t50 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t35) = 1;
    goto LAB55;

LAB54:    t58 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB55;

LAB56:    t71 = *((unsigned int *)t51);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t51) = (t71 | t72);
    t73 = (t5 + 4);
    t74 = (t35 + 4);
    t75 = *((unsigned int *)t5);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t35);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t89 & t85);
    t90 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t90 & t86);
    goto LAB58;

LAB59:    *((unsigned int *)t59) = 1;
    goto LAB62;

LAB61:    t98 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB62;

LAB63:    t103 = (t0 + 1368U);
    t104 = *((char **)t103);
    t103 = ((char*)((ng1)));
    memset(t97, 0, 8);
    t105 = (t104 + 4);
    t106 = (t103 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t103);
    t109 = (t107 ^ t108);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t106);
    t112 = (t110 ^ t111);
    t113 = (t109 | t112);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t106);
    t116 = (t114 | t115);
    t117 = (~(t116));
    t118 = (t113 & t117);
    if (t118 != 0)
        goto LAB69;

LAB66:    if (t116 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t97) = 1;

LAB69:    memset(t120, 0, 8);
    t121 = (t97 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t97);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t121) != 0)
        goto LAB72;

LAB73:    t129 = *((unsigned int *)t59);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t59 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    t119 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t120) = 1;
    goto LAB73;

LAB72:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB73;

LAB74:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t59 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t59);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB76;

LAB77:    xsi_set_current_line(113, ng0);
    t166 = (t0 + 1208U);
    t167 = *((char **)t166);
    t166 = (t0 + 1048U);
    t168 = *((char **)t166);
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t167, 32, (char)118, t168, 32);
    goto LAB79;

LAB80:    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 110000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t2, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t3, 32, t5, 32);
    memset(t35, 0, 8);
    t6 = (t21 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t21);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t6) != 0)
        goto LAB85;

LAB86:    t20 = (t35 + 4);
    t13 = *((unsigned int *)t35);
    t14 = *((unsigned int *)t20);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB87;

LAB88:    memcpy(t128, t35, 8);

LAB89:    t58 = (t128 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t128);
    t66 = (t62 & t61);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng18, 3, t0, (char)119, t3, 32, (char)119, t6, 32);

LAB99:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB83:    *((unsigned int *)t35) = 1;
    goto LAB86;

LAB85:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB86;

LAB87:    t22 = (t0 + 1048U);
    t28 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t59, 0, 8);
    xsi_vlog_signed_unary_minus(t59, 32, t22, 32);
    memset(t97, 0, 8);
    xsi_vlog_signed_equal(t97, 32, t28, 32, t59, 32);
    memset(t120, 0, 8);
    t29 = (t97 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (~(t16));
    t18 = *((unsigned int *)t97);
    t19 = (t18 & t17);
    t23 = (t19 & 1U);
    if (t23 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t29) != 0)
        goto LAB92;

LAB93:    t24 = *((unsigned int *)t35);
    t25 = *((unsigned int *)t120);
    t26 = (t24 & t25);
    *((unsigned int *)t128) = t26;
    t34 = (t35 + 4);
    t36 = (t120 + 4);
    t37 = (t128 + 4);
    t27 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t36);
    t31 = (t27 | t30);
    *((unsigned int *)t37) = t31;
    t32 = *((unsigned int *)t37);
    t38 = (t32 != 0);
    if (t38 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB89;

LAB90:    *((unsigned int *)t120) = 1;
    goto LAB93;

LAB92:    t33 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB93;

LAB94:    t39 = *((unsigned int *)t128);
    t40 = *((unsigned int *)t37);
    *((unsigned int *)t128) = (t39 | t40);
    t50 = (t35 + 4);
    t52 = (t120 + 4);
    t41 = *((unsigned int *)t35);
    t42 = (~(t41));
    t43 = *((unsigned int *)t50);
    t44 = (~(t43));
    t45 = *((unsigned int *)t120);
    t46 = (~(t45));
    t47 = *((unsigned int *)t52);
    t48 = (~(t47));
    t83 = (t42 & t44);
    t84 = (t46 & t48);
    t49 = (~(t83));
    t53 = (~(t84));
    t54 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t54 & t49);
    t55 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t55 & t53);
    t56 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t56 & t49);
    t57 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t57 & t53);
    goto LAB96;

LAB97:    xsi_set_current_line(133, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB99;

LAB100:    xsi_set_current_line(142, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng20)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB106;

LAB103:    if (t17 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t4) = 1;

LAB106:    memset(t5, 0, 8);
    t22 = (t4 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t22) != 0)
        goto LAB109;

LAB110:    t29 = (t5 + 4);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB111;

LAB112:    memcpy(t51, t5, 8);

LAB113:    t91 = (t51 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t51);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)118, t3, 32, (char)118, t6, 32);

LAB127:    xsi_set_current_line(157, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB105:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t5) = 1;
    goto LAB110;

LAB109:    t28 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB110;

LAB111:    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng22)));
    memset(t21, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB117;

LAB114:    if (t47 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t21) = 1;

LAB117:    memset(t35, 0, 8);
    t52 = (t21 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t21);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t52) != 0)
        goto LAB120;

LAB121:    t60 = *((unsigned int *)t5);
    t61 = *((unsigned int *)t35);
    t62 = (t60 & t61);
    *((unsigned int *)t51) = t62;
    t63 = (t5 + 4);
    t64 = (t35 + 4);
    t65 = (t51 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB113;

LAB116:    t50 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t35) = 1;
    goto LAB121;

LAB120:    t58 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB121;

LAB122:    t71 = *((unsigned int *)t51);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t51) = (t71 | t72);
    t73 = (t5 + 4);
    t74 = (t35 + 4);
    t75 = *((unsigned int *)t5);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t35);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t89 & t85);
    t90 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t90 & t86);
    goto LAB124;

LAB125:    xsi_set_current_line(153, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    goto LAB127;

}


extern void work_m_00000000003166090572_3140497085_init()
{
	static char *pe[] = {(void *)Always_60_0,(void *)Initial_62_1};
	xsi_register_didat("work_m_00000000003166090572_3140497085", "isim/MDU_tb_isim_beh.exe.sim/work/m_00000000003166090572_3140497085.didat");
	xsi_register_executes(pe);
}
