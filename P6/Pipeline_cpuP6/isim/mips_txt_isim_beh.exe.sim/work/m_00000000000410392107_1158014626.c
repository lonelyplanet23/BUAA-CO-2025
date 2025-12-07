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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/M_BE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void NetDecl_31_0(char *t0)
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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
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
    t12 = (t0 + 3832);
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
    t25 = (t0 + 3736);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t14[8];
    char t15[8];
    char t17[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB10:    t4 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t11 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t11 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(64, ng0);

LAB40:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB19:    goto LAB8;

LAB11:    xsi_set_current_line(40, ng0);

LAB20:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(45, ng0);

LAB21:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t13 = (t0 + 1368U);
    t18 = *((char **)t13);
    memset(t17, 0, 8);
    t13 = (t17 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t13) = t23;
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 65535U);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 65535U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t17, 16, t15, 16);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t14, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t16 = (t10 & 1);
    *((unsigned int *)t2) = t16;
    t12 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t13 = (t14 + 4);
    t18 = (t12 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t18);
    t25 = (t23 ^ t24);
    t27 = (t22 | t25);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t18);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB25;

LAB22:    if (t30 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t15) = 1;

LAB25:    t26 = (t15 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB28:    goto LAB19;

LAB15:    xsi_set_current_line(52, ng0);

LAB29:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t13 = (t0 + 1368U);
    t18 = *((char **)t13);
    memset(t17, 0, 8);
    t13 = (t17 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t13) = t23;
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 255U);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 255U);
    t26 = (t0 + 1368U);
    t38 = *((char **)t26);
    memset(t40, 0, 8);
    t26 = (t40 + 4);
    t39 = (t38 + 4);
    t27 = *((unsigned int *)t38);
    t28 = (t27 >> 0);
    *((unsigned int *)t40) = t28;
    t29 = *((unsigned int *)t39);
    t30 = (t29 >> 0);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t31 & 255U);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t32 & 255U);
    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t44 = (t43 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (t33 >> 0);
    *((unsigned int *)t41) = t34;
    t35 = *((unsigned int *)t44);
    t36 = (t35 >> 0);
    *((unsigned int *)t42) = t36;
    t37 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t37 & 255U);
    t45 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t45 & 255U);
    xsi_vlogtype_concat(t14, 32, 32, 4U, t41, 8, t40, 8, t17, 8, t15, 8);
    t46 = (t0 + 2248);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB30:    t2 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng4)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t11 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB19;

LAB24:    t19 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(48, ng0);
    t38 = ((char*)((ng4)));
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 4);
    goto LAB28;

LAB31:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng3)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    goto LAB39;

LAB33:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng6)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng7)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    goto LAB39;

LAB37:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng8)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    goto LAB39;

}


extern void work_m_00000000000410392107_1158014626_init()
{
	static char *pe[] = {(void *)NetDecl_31_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000000410392107_1158014626", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000410392107_1158014626.didat");
	xsi_register_executes(pe);
}
