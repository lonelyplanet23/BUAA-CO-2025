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
static const char *ng0 = "C:/Users/27628/Desktop/CO-2025/P6/Pipeline_cpuP6/Controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {34U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {42U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {43U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {35U, 0U};
static unsigned int ng18[] = {15U, 0U};



static void Always_52_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB32:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB33:    t4 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t7 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:
LAB50:    goto LAB31;

LAB9:    xsi_set_current_line(117, ng0);

LAB58:    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB11:    xsi_set_current_line(125, ng0);

LAB59:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB13:    xsi_set_current_line(133, ng0);

LAB60:    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB15:    xsi_set_current_line(142, ng0);

LAB61:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB17:    xsi_set_current_line(152, ng0);

LAB62:    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB19:    xsi_set_current_line(161, ng0);

LAB63:    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 3);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB21:    xsi_set_current_line(169, ng0);

LAB64:    xsi_set_current_line(170, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 3);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB31;

LAB23:    xsi_set_current_line(177, ng0);

LAB65:    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(184, ng0);

LAB66:    xsi_set_current_line(185, ng0);
    t4 = ((char*)((ng10)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB31;

LAB27:    xsi_set_current_line(191, ng0);

LAB67:    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB31;

LAB34:    xsi_set_current_line(68, ng0);

LAB51:    xsi_set_current_line(69, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB36:    xsi_set_current_line(75, ng0);

LAB52:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB38:    xsi_set_current_line(82, ng0);

LAB53:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng2)));
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 3);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB40:    xsi_set_current_line(86, ng0);

LAB54:    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB42:    xsi_set_current_line(93, ng0);

LAB55:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB44:    xsi_set_current_line(100, ng0);

LAB56:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

LAB46:    xsi_set_current_line(107, ng0);

LAB57:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB50;

}


extern void work_m_00000000003539874924_4144471541_init()
{
	static char *pe[] = {(void *)Always_52_0};
	xsi_register_didat("work_m_00000000003539874924_4144471541", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003539874924_4144471541.didat");
	xsi_register_executes(pe);
}
