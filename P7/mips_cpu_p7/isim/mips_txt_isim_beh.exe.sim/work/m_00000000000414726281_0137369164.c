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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P7/mips_cpu_p7/MultDivUnit.v";
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



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t13[8];
    char t17[8];
    char t32[8];
    char t38[8];
    char t72[16];
    char t73[16];
    char t74[16];
    char t76[8];
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
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
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
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
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

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3048);
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

LAB11:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t2) != 0)
        goto LAB20;

LAB21:    t5 = (t13 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB22;

LAB23:    memcpy(t38, t13, 8);

LAB24:    t28 = (t38 + 4);
    t65 = *((unsigned int *)t28);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2728);
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
        goto LAB57;

LAB55:    if (*((unsigned int *)t11) == 0)
        goto LAB54;

LAB56:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB57:    t14 = (t13 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB38:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(55, ng0);
    t12 = (t0 + 3048);
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
LAB16:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(55, ng0);

LAB17:    xsi_set_current_line(56, ng0);
    t24 = (t0 + 2888);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 32, 0LL);
    t28 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t28, t26, 32, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB20:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB22:    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t23);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t11) == 0)
        goto LAB25;

LAB27:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;

LAB28:    memset(t32, 0, 8);
    t15 = (t17 + 4);
    t33 = *((unsigned int *)t15);
    t34 = (~(t33));
    t35 = *((unsigned int *)t17);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB32:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t32);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t18 = (t13 + 4);
    t24 = (t32 + 4);
    t25 = (t38 + 4);
    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t24);
    t44 = (t42 | t43);
    *((unsigned int *)t25) = t44;
    t45 = *((unsigned int *)t25);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB25:    *((unsigned int *)t17) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB31:    t16 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB33:    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t25);
    *((unsigned int *)t38) = (t47 | t48);
    t26 = (t13 + 4);
    t27 = (t32 + 4);
    t49 = *((unsigned int *)t13);
    t50 = (~(t49));
    t51 = *((unsigned int *)t26);
    t52 = (~(t51));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t61 & t59);
    t62 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t59);
    t64 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t64 & t60);
    goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);

LAB39:    xsi_set_current_line(62, ng0);
    t70 = ((char*)((ng4)));
    t71 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB40:    t2 = ((char*)((ng1)));
    t57 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t57 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t57 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t57 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t57 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t57 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng9)));
    t57 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t57 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB38;

LAB41:    xsi_set_current_line(64, ng0);

LAB50:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t72, 64, t5, 32);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t73, 64, t11, 32);
    xsi_vlog_signed_multiply(t74, 64, t72, 64, t73, 64);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t74, 0, 0, 64, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(68, ng0);

LAB51:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t72, 64, t5, 32, t11, 32);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(72, ng0);

LAB52:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    memset(t32, 0, 8);
    xsi_vlog_signed_divide(t32, 32, t5, 32, t11, 32);
    t4 = (t0 + 1048U);
    t12 = *((char **)t4);
    t4 = (t0 + 1208U);
    t14 = *((char **)t4);
    memset(t76, 0, 8);
    xsi_vlog_signed_mod(t76, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t72, 64, 64, 2U, t76, 32, t32, 32);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB49;

LAB47:    xsi_set_current_line(76, ng0);

LAB53:    xsi_set_current_line(77, ng0);
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
    xsi_vlogtype_concat(t72, 64, 64, 2U, t17, 32, t13, 32);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    goto LAB49;

LAB54:    *((unsigned int *)t13) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(83, ng0);

LAB61:    xsi_set_current_line(84, ng0);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);

LAB62:    t15 = ((char*)((ng10)));
    t57 = xsi_vlog_unsigned_case_compare(t16, 3, t15, 3);
    if (t57 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng11)));
    t57 = xsi_vlog_unsigned_case_compare(t16, 3, t2, 3);
    if (t57 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB60;

LAB63:    xsi_set_current_line(85, ng0);

LAB68:    xsi_set_current_line(86, ng0);
    t18 = (t0 + 1048U);
    t24 = *((char **)t18);
    t18 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t18, t24, 0, 0, 32, 0LL);
    goto LAB67;

LAB65:    xsi_set_current_line(88, ng0);

LAB69:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB67;

}


extern void work_m_00000000000414726281_0137369164_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000000414726281_0137369164", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000414726281_0137369164.didat");
	xsi_register_executes(pe);
}
