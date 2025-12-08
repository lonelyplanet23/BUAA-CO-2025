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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/M_DE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {24, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {16, 0};



static void Always_30_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t19[8];
    char t23[8];
    char t51[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(34, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);

LAB17:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB11:    xsi_set_current_line(43, ng0);

LAB27:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t12 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t20 = (t10 + 4);
    t21 = (t12 + 4);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t12);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t21);
    t30 = (t28 ^ t29);
    t32 = (t27 | t30);
    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t21);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB31;

LAB28:    if (t35 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t11) = 1;

LAB31:    t24 = (t11 + 4);
    t38 = *((unsigned int *)t24);
    t39 = (~(t38));
    t40 = *((unsigned int *)t11);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 16);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 16);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 65535U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 65535U);
    t8 = ((char*)((ng7)));
    t12 = (t0 + 1368U);
    t20 = *((char **)t12);
    memset(t23, 0, 8);
    t12 = (t23 + 4);
    t21 = (t20 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t21);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t12) = t30;
    xsi_vlog_mul_concat(t19, 16, 1, t8, 1U, t23, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 16, t11, 16);
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 32);

LAB34:    goto LAB15;

LAB18:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 255U);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 7);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 7);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    xsi_vlog_mul_concat(t19, 24, 1, t20, 1U, t23, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 24, t11, 8);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 32);
    goto LAB26;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 8);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 8);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng3)));
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t20 = (t23 + 4);
    t22 = (t21 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t22);
    t29 = (t28 >> 15);
    t30 = (t29 & 1);
    *((unsigned int *)t20) = t30;
    xsi_vlog_mul_concat(t19, 24, 1, t12, 1U, t23, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 24, t11, 8);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 32);
    goto LAB26;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 16);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 16);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng3)));
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t20 = (t23 + 4);
    t22 = (t21 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 23);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t22);
    t29 = (t28 >> 23);
    t30 = (t29 & 1);
    *((unsigned int *)t20) = t30;
    xsi_vlog_mul_concat(t19, 24, 1, t12, 1U, t23, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 24, t11, 8);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 32);
    goto LAB26;

LAB24:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 24);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 24);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t12 = ((char*)((ng3)));
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t20 = (t23 + 4);
    t22 = (t21 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t22);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t20) = t30;
    xsi_vlog_mul_concat(t19, 24, 1, t12, 1U, t23, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t19, 24, t11, 8);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 32);
    goto LAB26;

LAB30:    t22 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(44, ng0);
    t31 = (t0 + 1368U);
    t43 = *((char **)t31);
    memset(t23, 0, 8);
    t31 = (t23 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 0);
    *((unsigned int *)t23) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t31) = t48;
    t49 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t49 & 65535U);
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & 65535U);
    t52 = ((char*)((ng7)));
    t53 = (t0 + 1368U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 15);
    t59 = (t58 & 1);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 15);
    t62 = (t61 & 1);
    *((unsigned int *)t53) = t62;
    xsi_vlog_mul_concat(t51, 16, 1, t52, 1U, t55, 1);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t51, 16, t23, 16);
    t63 = (t0 + 1768);
    xsi_vlogvar_assign_value(t63, t19, 0, 0, 32);
    goto LAB34;

}


extern void work_m_00000000003891245108_0325009700_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000003891245108_0325009700", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003891245108_0325009700.didat");
	xsi_register_executes(pe);
}
