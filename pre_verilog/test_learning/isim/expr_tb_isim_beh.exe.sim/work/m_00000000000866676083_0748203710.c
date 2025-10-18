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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/pre_verilog/test_learning/expression.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {48, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {49, 0};
static int ng6[] = {50, 0};
static int ng7[] = {51, 0};
static int ng8[] = {52, 0};
static int ng9[] = {53, 0};
static int ng10[] = {54, 0};
static int ng11[] = {55, 0};
static int ng12[] = {56, 0};
static int ng13[] = {57, 0};
static int ng14[] = {43, 0};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {42, 0};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {2U, 0U};
static unsigned int ng19[] = {3U, 0U};



static void Always_39_0(char *t0)
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

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_48_1(char *t0)
{
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(97, ng0);

LAB165:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t10 = (t0 + 2448);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t10 = (t0 + 2768);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2448);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t8 == 1)
        goto LAB24;

LAB25:    t4 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t3, 8, t4, 8);
    if (t11 == 1)
        goto LAB26;

LAB27:    t5 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t3, 8, t5, 8);
    if (t12 == 1)
        goto LAB28;

LAB29:    t7 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 8, t7, 8);
    if (t13 == 1)
        goto LAB30;

LAB31:    t9 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 8, t9, 8);
    if (t14 == 1)
        goto LAB32;

LAB33:    t10 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 8, t10, 8);
    if (t15 == 1)
        goto LAB34;

LAB35:    t16 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 8, t16, 8);
    if (t17 == 1)
        goto LAB36;

LAB37:    t18 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 8, t18, 8);
    if (t19 == 1)
        goto LAB38;

LAB39:    t20 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 8, t20, 8);
    if (t21 == 1)
        goto LAB40;

LAB41:    t22 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t3, 8, t22, 8);
    if (t23 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t8 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 2768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB48:    goto LAB19;

LAB9:    xsi_set_current_line(61, ng0);

LAB49:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t0 + 2448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);

LAB50:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB53;

LAB54:    t5 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t11 == 1)
        goto LAB55;

LAB56:    t7 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 8, t7, 8);
    if (t12 == 1)
        goto LAB57;

LAB58:    t9 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t9, 8);
    if (t13 == 1)
        goto LAB59;

LAB60:    t10 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 8, t10, 8);
    if (t14 == 1)
        goto LAB61;

LAB62:    t16 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 8, t16, 8);
    if (t15 == 1)
        goto LAB63;

LAB64:    t18 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 8, t18, 8);
    if (t17 == 1)
        goto LAB65;

LAB66:    t20 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 8, t20, 8);
    if (t19 == 1)
        goto LAB67;

LAB68:    t22 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 8, t22, 8);
    if (t21 == 1)
        goto LAB69;

LAB70:    t24 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 8, t24, 8);
    if (t23 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB73;

LAB74:
LAB76:
LAB75:    xsi_set_current_line(66, ng0);
    t5 = ((char*)((ng15)));
    t7 = (t0 + 2768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);

LAB77:    goto LAB19;

LAB11:    xsi_set_current_line(70, ng0);

LAB78:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2448);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2048U);
    t5 = *((char **)t2);

LAB79:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t8 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t8 == 1)
        goto LAB82;

LAB83:    t7 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t11 == 1)
        goto LAB84;

LAB85:    t9 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 8, t9, 8);
    if (t12 == 1)
        goto LAB86;

LAB87:    t10 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 8, t10, 8);
    if (t13 == 1)
        goto LAB88;

LAB89:    t16 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 8, t16, 8);
    if (t14 == 1)
        goto LAB90;

LAB91:    t18 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 8, t18, 8);
    if (t15 == 1)
        goto LAB92;

LAB93:    t20 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 8, t20, 8);
    if (t17 == 1)
        goto LAB94;

LAB95:    t22 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t5, 8, t22, 8);
    if (t19 == 1)
        goto LAB96;

LAB97:    t24 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 8, t24, 8);
    if (t21 == 1)
        goto LAB98;

LAB99:    t25 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 8, t25, 8);
    if (t23 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t8 == 1)
        goto LAB102;

LAB103:
LAB105:
LAB104:    xsi_set_current_line(75, ng0);
    t7 = ((char*)((ng15)));
    t9 = (t0 + 2768);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);

LAB106:    goto LAB19;

LAB13:    xsi_set_current_line(79, ng0);

LAB107:    xsi_set_current_line(80, ng0);
    t7 = ((char*)((ng17)));
    t9 = (t0 + 2448);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2048U);
    t7 = *((char **)t2);

LAB108:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t8 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t8 == 1)
        goto LAB111;

LAB112:    t9 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t7, 8, t9, 8);
    if (t11 == 1)
        goto LAB113;

LAB114:    t10 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t7, 8, t10, 8);
    if (t12 == 1)
        goto LAB115;

LAB116:    t16 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t7, 8, t16, 8);
    if (t13 == 1)
        goto LAB117;

LAB118:    t18 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t7, 8, t18, 8);
    if (t14 == 1)
        goto LAB119;

LAB120:    t20 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 8, t20, 8);
    if (t15 == 1)
        goto LAB121;

LAB122:    t22 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t7, 8, t22, 8);
    if (t17 == 1)
        goto LAB123;

LAB124:    t24 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t7, 8, t24, 8);
    if (t19 == 1)
        goto LAB125;

LAB126:    t25 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t7, 8, t25, 8);
    if (t21 == 1)
        goto LAB127;

LAB128:    t26 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t7, 8, t26, 8);
    if (t23 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t8 == 1)
        goto LAB131;

LAB132:
LAB134:
LAB133:    xsi_set_current_line(84, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 2768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);

LAB135:    goto LAB19;

LAB15:    xsi_set_current_line(88, ng0);

LAB136:    xsi_set_current_line(89, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2448);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2048U);
    t9 = *((char **)t2);

LAB137:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 8, t2, 8);
    if (t8 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 8, t2, 8);
    if (t8 == 1)
        goto LAB140;

LAB141:    t10 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t9, 8, t10, 8);
    if (t11 == 1)
        goto LAB142;

LAB143:    t16 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t9, 8, t16, 8);
    if (t12 == 1)
        goto LAB144;

LAB145:    t18 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t9, 8, t18, 8);
    if (t13 == 1)
        goto LAB146;

LAB147:    t20 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t9, 8, t20, 8);
    if (t14 == 1)
        goto LAB148;

LAB149:    t22 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t9, 8, t22, 8);
    if (t15 == 1)
        goto LAB150;

LAB151:    t24 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t9, 8, t24, 8);
    if (t17 == 1)
        goto LAB152;

LAB153:    t25 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t9, 8, t25, 8);
    if (t19 == 1)
        goto LAB154;

LAB155:    t26 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t9, 8, t26, 8);
    if (t21 == 1)
        goto LAB156;

LAB157:    t27 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t9, 8, t27, 8);
    if (t23 == 1)
        goto LAB158;

LAB159:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t9, 8, t2, 8);
    if (t8 == 1)
        goto LAB160;

LAB161:
LAB163:
LAB162:    xsi_set_current_line(93, ng0);
    t10 = ((char*)((ng15)));
    t16 = (t0 + 2768);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 3);

LAB164:    goto LAB19;

LAB22:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB48;

LAB24:    goto LAB22;

LAB26:    goto LAB22;

LAB28:    goto LAB22;

LAB30:    goto LAB22;

LAB32:    goto LAB22;

LAB34:    goto LAB22;

LAB36:    goto LAB22;

LAB38:    goto LAB22;

LAB40:    goto LAB22;

LAB42:    xsi_set_current_line(55, ng0);
    t24 = ((char*)((ng15)));
    t25 = (t0 + 2768);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB48;

LAB44:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB48;

LAB51:    xsi_set_current_line(64, ng0);
    t5 = ((char*)((ng15)));
    t7 = (t0 + 2768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB77;

LAB53:    goto LAB51;

LAB55:    goto LAB51;

LAB57:    goto LAB51;

LAB59:    goto LAB51;

LAB61:    goto LAB51;

LAB63:    goto LAB51;

LAB65:    goto LAB51;

LAB67:    goto LAB51;

LAB69:    goto LAB51;

LAB71:    xsi_set_current_line(65, ng0);
    t25 = ((char*)((ng18)));
    t26 = (t0 + 2768);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 3);
    goto LAB77;

LAB73:    goto LAB71;

LAB80:    xsi_set_current_line(73, ng0);
    t7 = ((char*)((ng19)));
    t9 = (t0 + 2768);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB106;

LAB82:    goto LAB80;

LAB84:    goto LAB80;

LAB86:    goto LAB80;

LAB88:    goto LAB80;

LAB90:    goto LAB80;

LAB92:    goto LAB80;

LAB94:    goto LAB80;

LAB96:    goto LAB80;

LAB98:    goto LAB80;

LAB100:    xsi_set_current_line(74, ng0);
    t26 = ((char*)((ng15)));
    t27 = (t0 + 2768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB106;

LAB102:    goto LAB100;

LAB109:    xsi_set_current_line(82, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 2768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB135;

LAB111:    goto LAB109;

LAB113:    goto LAB109;

LAB115:    goto LAB109;

LAB117:    goto LAB109;

LAB119:    goto LAB109;

LAB121:    goto LAB109;

LAB123:    goto LAB109;

LAB125:    goto LAB109;

LAB127:    goto LAB109;

LAB129:    xsi_set_current_line(83, ng0);
    t27 = ((char*)((ng18)));
    t28 = (t0 + 2768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB135;

LAB131:    goto LAB129;

LAB138:    xsi_set_current_line(91, ng0);
    t10 = ((char*)((ng15)));
    t16 = (t0 + 2768);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 3);
    goto LAB164;

LAB140:    goto LAB138;

LAB142:    goto LAB138;

LAB144:    goto LAB138;

LAB146:    goto LAB138;

LAB148:    goto LAB138;

LAB150:    goto LAB138;

LAB152:    goto LAB138;

LAB154:    goto LAB138;

LAB156:    goto LAB138;

LAB158:    xsi_set_current_line(92, ng0);
    t28 = ((char*)((ng15)));
    t29 = (t0 + 2768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 3);
    goto LAB164;

LAB160:    goto LAB158;

}


extern void work_m_00000000000866676083_0748203710_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000000866676083_0748203710", "isim/expr_tb_isim_beh.exe.sim/work/m_00000000000866676083_0748203710.didat");
	xsi_register_executes(pe);
}
