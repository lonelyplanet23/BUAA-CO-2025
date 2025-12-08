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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/MultDivUnit.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t13[8];
    char t17[8];
    char t30[16];
    char t31[16];
    char t32[16];
    char t33[8];
    char t36[8];
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
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t11) == 0)
        goto LAB36;

LAB38:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB39:    t14 = (t13 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB40;

LAB41:
LAB42:
LAB20:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t12 = (t0 + 2888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t15, 32, t16, 32);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(54, ng0);

LAB17:    xsi_set_current_line(55, ng0);
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 32, 0LL);
    t28 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t28, t26, 32, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(60, ng0);

LAB21:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB22:    t2 = ((char*)((ng1)));
    t29 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t29 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t29 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t29 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t29 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t29 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t29 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t29 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    xsi_set_current_line(63, ng0);

LAB32:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t30, 64, t5, 32);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t31, 64, t11, 32);
    xsi_vlog_signed_multiply(t32, 64, t30, 64, t31, 64);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t32, 0, 0, 64, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(67, ng0);

LAB33:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t30, 64, t5, 32, t11, 32);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t30, 0, 0, 64, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(71, ng0);

LAB34:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t5, 32, t11, 32);
    t4 = (t0 + 1048U);
    t12 = *((char **)t4);
    t4 = (t0 + 1208U);
    t14 = *((char **)t4);
    memset(t36, 0, 8);
    xsi_vlog_signed_mod(t36, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t30, 64, 64, 2U, t36, 32, t33, 32);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t30, 0, 0, 64, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(75, ng0);

LAB35:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 32, t11, 32);
    t4 = (t0 + 1048U);
    t12 = *((char **)t4);
    t4 = (t0 + 1208U);
    t14 = *((char **)t4);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t30, 64, 64, 2U, t17, 32, t13, 32);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t30, 0, 0, 64, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB31;

LAB36:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(82, ng0);

LAB43:    xsi_set_current_line(83, ng0);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);

LAB44:    t15 = ((char*)((ng10)));
    t29 = xsi_vlog_unsigned_case_compare(t16, 3, t15, 3);
    if (t29 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng11)));
    t29 = xsi_vlog_unsigned_case_compare(t16, 3, t2, 3);
    if (t29 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB45:    xsi_set_current_line(84, ng0);

LAB50:    xsi_set_current_line(85, ng0);
    t18 = (t0 + 1048U);
    t24 = *((char **)t18);
    t18 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t18, t24, 0, 0, 32, 0LL);
    goto LAB49;

LAB47:    xsi_set_current_line(87, ng0);

LAB51:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB49;

}


extern void work_m_00000000002493236336_0137369164_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000002493236336_0137369164", "isim/MDU_tb_isim_beh.exe.sim/work/m_00000000002493236336_0137369164.didat");
	xsi_register_executes(pe);
}
