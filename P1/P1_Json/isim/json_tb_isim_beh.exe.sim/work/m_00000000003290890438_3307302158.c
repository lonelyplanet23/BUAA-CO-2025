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
static const char *ng0 = "C:/Users/27628/Documents/CO-2025/P1/P1_Json/P1_JSON.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {123, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {125, 0};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {58, 0};
static unsigned int ng12[] = {5U, 0U};
static int ng13[] = {44, 0};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {7U, 0U};
static int ng16[] = {32, 0};



static void Always_41_0(char *t0)
{
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

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5256);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);

LAB10:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3128);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

}

static void Always_53_1(char *t0)
{
    char t11[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5272);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 3448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB28:    xsi_set_current_line(56, ng0);
    t9 = (t0 + 2728U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB32;

LAB29:    if (t23 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t11) = 1;

LAB32:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB35:    goto LAB27;

LAB9:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB40;

LAB37:    if (t23 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t11) = 1;

LAB40:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB47;

LAB44:    if (t23 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t11) = 1;

LAB47:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB50:
LAB43:    goto LAB27;

LAB11:    xsi_set_current_line(67, ng0);

LAB51:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB55;

LAB52:    if (t23 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t11) = 1;

LAB55:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB58:    goto LAB27;

LAB13:    xsi_set_current_line(72, ng0);

LAB59:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB63;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;

LAB63:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB66:    goto LAB27;

LAB15:    xsi_set_current_line(77, ng0);

LAB67:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB71;

LAB68:    if (t23 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t11) = 1;

LAB71:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB78;

LAB75:    if (t23 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t11) = 1;

LAB78:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB86;

LAB83:    if (t23 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t11) = 1;

LAB86:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB89:
LAB81:
LAB74:    goto LAB27;

LAB17:    xsi_set_current_line(90, ng0);

LAB91:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB95;

LAB92:    if (t23 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t11) = 1;

LAB95:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB98:    goto LAB27;

LAB19:    xsi_set_current_line(95, ng0);

LAB99:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB103;

LAB100:    if (t23 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t11) = 1;

LAB103:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB106:    goto LAB27;

LAB21:    xsi_set_current_line(100, ng0);

LAB107:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 3768);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3128);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3128);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t4 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB109;

LAB108:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB110;

LAB111:    t26 = (t11 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB119;

LAB116:    if (t23 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t11) = 1;

LAB119:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB126;

LAB123:    if (t23 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t11) = 1;

LAB126:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB129:
LAB122:    goto LAB27;

LAB23:    xsi_set_current_line(109, ng0);

LAB130:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB134;

LAB131:    if (t23 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t11) = 1;

LAB134:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB141;

LAB138:    if (t23 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t11) = 1;

LAB141:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB144:
LAB137:    goto LAB27;

LAB25:    xsi_set_current_line(116, ng0);

LAB145:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB149;

LAB146:    if (t23 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t11) = 1;

LAB149:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB152:    goto LAB27;

LAB31:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 3608);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 4);
    goto LAB35;

LAB39:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB43;

LAB46:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(63, ng0);
    t10 = ((char*)((ng7)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB50;

LAB54:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(68, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB58;

LAB62:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(73, ng0);
    t12 = ((char*)((ng10)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB66;

LAB70:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(78, ng0);
    t12 = ((char*)((ng12)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB74;

LAB77:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(79, ng0);

LAB82:    xsi_set_current_line(80, ng0);
    t10 = (t0 + 3768);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = ((char*)((ng3)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t13, 32, t26, 32);
    t27 = (t0 + 3768);
    xsi_vlogvar_assign_value(t27, t35, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB81;

LAB85:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(83, ng0);

LAB90:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 3768);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = ((char*)((ng3)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t13, 32, t26, 32);
    t27 = (t0 + 3768);
    xsi_vlogvar_assign_value(t27, t35, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB89;

LAB94:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(91, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB98;

LAB102:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(96, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB106;

LAB109:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB111;

LAB110:    *((unsigned int *)t11) = 1;
    goto LAB111;

LAB113:    xsi_set_current_line(102, ng0);
    t27 = (t0 + 3128);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 3288);
    xsi_vlogvar_assign_value(t36, t34, 0, 0, 8);
    goto LAB115;

LAB118:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(104, ng0);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB122;

LAB125:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(105, ng0);
    t10 = ((char*)((ng1)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB129;

LAB133:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(111, ng0);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB137;

LAB140:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(112, ng0);
    t10 = ((char*)((ng1)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB144;

LAB148:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(117, ng0);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 3608);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB152;

}


extern void work_m_00000000003290890438_3307302158_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000003290890438_3307302158", "isim/json_tb_isim_beh.exe.sim/work/m_00000000003290890438_3307302158.didat");
	xsi_register_executes(pe);
}
