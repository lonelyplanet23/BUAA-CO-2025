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
static const char *ng0 = "C:/Users/27628/Documents/CO-2025/P1/P1_Json/json_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {578648957, 0, 1634497893, 0, 574235254, 0, 2099280674, 0, 975332898, 0, 740451618, 0, 975332386, 0, 740451106, 0, 975331874, 0, 2065850658, 0, 1981971744, 0, 1797405218, 0, 1981951010, 0, 1797405218, 0, 2099280674, 0, 1819632930, 0, 975337057, 0, 1801812258, 0, 31522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {8, 0};



static void Always_46_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_52_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t33[256];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1024);
    xsi_set_current_line(64, ng0);

LAB6:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 248);
    t9 = (t6 + 252);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 24);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 24);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    memset(t4, 0, 8);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 & 255U);
    if (t21 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t16) == 0)
        goto LAB7;

LAB9:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB10:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(64, ng0);
    t29 = (t0 + 2088);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t33, 1024, t31, 1024, t32, 32);
    t34 = (t0 + 2088);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1024);
    goto LAB6;

LAB13:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);

LAB14:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 248);
    t9 = (t6 + 252);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 24);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 24);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB15;

LAB16:    goto LAB1;

LAB15:    xsi_set_current_line(68, ng0);

LAB17:    xsi_set_current_line(69, ng0);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    memset(t5, 0, 8);
    t30 = (t5 + 4);
    t31 = (t29 + 248);
    t32 = (t29 + 252);
    t24 = *((unsigned int *)t31);
    t25 = (t24 >> 24);
    *((unsigned int *)t5) = t25;
    t26 = *((unsigned int *)t32);
    t27 = (t26 >> 24);
    *((unsigned int *)t30) = t27;
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 255U);
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 255U);
    t34 = (t0 + 1928);
    xsi_vlogvar_assign_value(t34, t5, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t33, 1024, t6, 1024, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t33, 0, 0, 1024);
    goto LAB14;

}


extern void work_m_00000000000033611974_0675538925_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Initial_52_1};
	xsi_register_didat("work_m_00000000000033611974_0675538925", "isim/json_tb_isim_beh.exe.sim/work/m_00000000000033611974_0675538925.didat");
	xsi_register_executes(pe);
}
