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
static const char *ng0 = "C:/Users/27628/Documents/CO-2025/P7/mips_cpu_p7/M_BE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void NetDecl_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 3992);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1U);
    t25 = (t0 + 3896);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t6[8];
    char t15[8];
    char t34[8];
    char t42[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB10;

LAB11:    memcpy(t42, t6, 8);

LAB12:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t16 = (t0 + 1688U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t16) == 0)
        goto LAB13;

LAB15:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB16:    t24 = (t15 + 4);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    *((unsigned int *)t15) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB18;

LAB17:    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    memset(t34, 0, 8);
    t35 = (t15 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t35) != 0)
        goto LAB21;

LAB22:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB18:    t28 = *((unsigned int *)t15);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t15) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB17;

LAB19:    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB21:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB23:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB25;

LAB26:    xsi_set_current_line(38, ng0);

LAB29:    xsi_set_current_line(39, ng0);
    t80 = (t0 + 1048U);
    t81 = *((char **)t80);

LAB30:    t80 = ((char*)((ng1)));
    t82 = xsi_vlog_unsigned_case_compare(t81, 2, t80, 2);
    if (t82 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t66 = xsi_vlog_unsigned_case_compare(t81, 2, t2, 2);
    if (t66 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng6)));
    t66 = xsi_vlog_unsigned_case_compare(t81, 2, t2, 2);
    if (t66 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(64, ng0);

LAB60:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB39:    goto LAB28;

LAB31:    xsi_set_current_line(40, ng0);

LAB40:    xsi_set_current_line(41, ng0);
    t83 = ((char*)((ng2)));
    t84 = (t0 + 2248);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(45, ng0);

LAB41:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 65535U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 65535U);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    memset(t34, 0, 8);
    t16 = (t34 + 4);
    t23 = (t17 + 4);
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 0);
    *((unsigned int *)t34) = t14;
    t18 = *((unsigned int *)t23);
    t19 = (t18 >> 0);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t20 & 65535U);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t21 & 65535U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t34, 16, t15, 16);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t5 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t5);
    t18 = (t13 ^ t14);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t17);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t26 = *((unsigned int *)t16);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t22 & t29);
    if (t30 != 0)
        goto LAB45;

LAB42:    if (t28 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t15) = 1;

LAB45:    t24 = (t15 + 4);
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = *((unsigned int *)t15);
    t36 = (t33 & t32);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB48:    goto LAB39;

LAB35:    xsi_set_current_line(52, ng0);

LAB49:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 255U);
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    memset(t34, 0, 8);
    t16 = (t34 + 4);
    t23 = (t17 + 4);
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 0);
    *((unsigned int *)t34) = t14;
    t18 = *((unsigned int *)t23);
    t19 = (t18 >> 0);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t20 & 255U);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t21 & 255U);
    t24 = (t0 + 1368U);
    t25 = *((char **)t24);
    memset(t42, 0, 8);
    t24 = (t42 + 4);
    t35 = (t25 + 4);
    t22 = *((unsigned int *)t25);
    t26 = (t22 >> 0);
    *((unsigned int *)t42) = t26;
    t27 = *((unsigned int *)t35);
    t28 = (t27 >> 0);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t29 & 255U);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t30 & 255U);
    t41 = (t0 + 1368U);
    t46 = *((char **)t41);
    memset(t85, 0, 8);
    t41 = (t85 + 4);
    t47 = (t46 + 4);
    t31 = *((unsigned int *)t46);
    t32 = (t31 >> 0);
    *((unsigned int *)t85) = t32;
    t33 = *((unsigned int *)t47);
    t36 = (t33 >> 0);
    *((unsigned int *)t41) = t36;
    t37 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t37 & 255U);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t38 & 255U);
    xsi_vlogtype_concat(t6, 32, 32, 4U, t85, 8, t42, 8, t34, 8, t15, 8);
    t48 = (t0 + 2408);
    xsi_vlogvar_assign_value(t48, t6, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB50:    t2 = ((char*)((ng1)));
    t66 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t66 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng3)));
    t66 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t66 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng6)));
    t66 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t66 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng4)));
    t66 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t66 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB39;

LAB44:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(48, ng0);
    t25 = ((char*)((ng4)));
    t35 = (t0 + 2248);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);
    goto LAB48;

LAB51:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB59;

LAB53:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB59;

LAB55:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB59;

LAB57:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB59;

}


extern void work_m_00000000002486420260_1158014626_init()
{
	static char *pe[] = {(void *)NetDecl_32_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002486420260_1158014626", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002486420260_1158014626.didat");
	xsi_register_executes(pe);
}
