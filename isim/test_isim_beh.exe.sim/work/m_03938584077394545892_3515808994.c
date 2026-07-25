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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/morteza/MIPS/MIPS.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};



static void Always_98_0(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t73[8];
    char t84[8];
    char t103[8];
    char t111[8];
    char t143[8];
    char t151[8];
    char t187[16];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;

LAB0:    t1 = (t0 + 9080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 11880);
    *((int *)t2) = 1;
    t3 = (t0 + 9112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    memset(t58, 0, 8);
    t59 = (t26 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t59) != 0)
        goto LAB22;

LAB23:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = (!(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB24;

LAB25:    memcpy(t151, t58, 8);

LAB26:    t179 = (t151 + 4);
    t180 = *((unsigned int *)t179);
    t181 = (~(t180));
    t182 = *((unsigned int *)t151);
    t183 = (t182 & t181);
    t184 = (t183 != 0);
    if (t184 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB57;

LAB58:
LAB59:
LAB56:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 2648U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:    *((unsigned int *)t58) = 1;
    goto LAB23;

LAB22:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB23;

LAB24:    t71 = (t0 + 3608U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    t71 = (t72 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t71) != 0)
        goto LAB29;

LAB30:    t80 = (t73 + 4);
    t81 = *((unsigned int *)t73);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB31;

LAB32:    memcpy(t111, t73, 8);

LAB33:    memset(t143, 0, 8);
    t144 = (t111 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t111);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t144) != 0)
        goto LAB49;

LAB50:    t152 = *((unsigned int *)t58);
    t153 = *((unsigned int *)t143);
    t154 = (t152 | t153);
    *((unsigned int *)t151) = t154;
    t155 = (t58 + 4);
    t156 = (t143 + 4);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t155);
    t159 = *((unsigned int *)t156);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 != 0);
    if (t162 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB26;

LAB27:    *((unsigned int *)t73) = 1;
    goto LAB30;

LAB29:    t79 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB30;

LAB31:    t85 = (t0 + 2648U);
    t86 = *((char **)t85);
    memset(t84, 0, 8);
    t85 = (t86 + 4);
    t87 = *((unsigned int *)t85);
    t88 = (~(t87));
    t89 = *((unsigned int *)t86);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t85) == 0)
        goto LAB34;

LAB36:    t92 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t92) = 1;

LAB37:    t93 = (t84 + 4);
    t94 = (t86 + 4);
    t95 = *((unsigned int *)t86);
    t96 = (~(t95));
    *((unsigned int *)t84) = t96;
    *((unsigned int *)t93) = 0;
    if (*((unsigned int *)t94) != 0)
        goto LAB39;

LAB38:    t101 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t101 & 1U);
    t102 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t102 & 1U);
    memset(t103, 0, 8);
    t104 = (t84 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t84);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t104) != 0)
        goto LAB42;

LAB43:    t112 = *((unsigned int *)t73);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t73 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB33;

LAB34:    *((unsigned int *)t84) = 1;
    goto LAB37;

LAB39:    t97 = *((unsigned int *)t84);
    t98 = *((unsigned int *)t94);
    *((unsigned int *)t84) = (t97 | t98);
    t99 = *((unsigned int *)t93);
    t100 = *((unsigned int *)t94);
    *((unsigned int *)t93) = (t99 | t100);
    goto LAB38;

LAB40:    *((unsigned int *)t103) = 1;
    goto LAB43;

LAB42:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB43;

LAB44:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t73 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t73);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB46;

LAB47:    *((unsigned int *)t143) = 1;
    goto LAB50;

LAB49:    t150 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB50;

LAB51:    t163 = *((unsigned int *)t151);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t151) = (t163 | t164);
    t165 = (t58 + 4);
    t166 = (t143 + 4);
    t167 = *((unsigned int *)t165);
    t168 = (~(t167));
    t169 = *((unsigned int *)t58);
    t170 = (t169 & t168);
    t171 = *((unsigned int *)t166);
    t172 = (~(t171));
    t173 = *((unsigned int *)t143);
    t174 = (t173 & t172);
    t175 = (~(t170));
    t176 = (~(t174));
    t177 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t177 & t175);
    t178 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t178 & t176);
    goto LAB53;

LAB54:    xsi_set_current_line(101, ng0);
    t185 = ((char*)((ng1)));
    t186 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t186, t185, 0, 0, 64, 0LL);
    goto LAB56;

LAB57:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 4408U);
    t5 = *((char **)t4);
    t4 = (t0 + 4088U);
    t12 = *((char **)t4);
    xsi_vlogtype_concat(t187, 64, 64, 2U, t12, 32, t5, 32);
    t4 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t4, t187, 0, 0, 64, 0LL);
    goto LAB59;

}

static void Always_107_1(char *t0)
{
    char t13[40];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 9328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 11896);
    *((int *)t2) = 1;
    t3 = (t0 + 9360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 3928U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB9:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6168U);
    t4 = *((char **)t2);
    t2 = (t0 + 5048U);
    t5 = *((char **)t2);
    t2 = (t0 + 4888U);
    t11 = *((char **)t2);
    t2 = (t0 + 4728U);
    t12 = *((char **)t2);
    t2 = (t0 + 3128U);
    t14 = *((char **)t2);
    t2 = (t0 + 7128U);
    t15 = *((char **)t2);
    t2 = (t0 + 3288U);
    t16 = *((char **)t2);
    t2 = (t0 + 2968U);
    t17 = *((char **)t2);
    t2 = (t0 + 2808U);
    t18 = *((char **)t2);
    t2 = (t0 + 3448U);
    t19 = *((char **)t2);
    t2 = (t0 + 2488U);
    t20 = *((char **)t2);
    xsi_vlogtype_concat(t13, 129, 129, 12U, t20, 1, t19, 1, t18, 1, t17, 1, t16, 1, t15, 2, t14, 1, t12, 32, t11, 32, t5, 32, t4, 10, t3, 15);
    t2 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 129, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(110, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 129, 0LL);
    goto LAB8;

}

static void Always_119_2(char *t0)
{
    char t4[24];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 11912);
    *((int *)t2) = 1;
    t3 = (t0 + 9608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t5 = (t0 + 6488U);
    t6 = *((char **)t5);
    t5 = (t0 + 5368U);
    t7 = *((char **)t5);
    t5 = (t0 + 5208U);
    t8 = *((char **)t5);
    t5 = (t0 + 7848);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t12 = (t9 + 4);
    t13 = (t11 + 24);
    t14 = (t11 + 28);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 29);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 29);
    *((unsigned int *)t12) = t18;
    t19 = (t11 + 32);
    t20 = (t11 + 36);
    t21 = *((unsigned int *)t19);
    t22 = (t21 << 3);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 | t22);
    t24 = *((unsigned int *)t20);
    t25 = (t24 << 3);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 | t25);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t27 & 15U);
    t28 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t28 & 15U);
    xsi_vlogtype_concat(t4, 73, 73, 4U, t9, 4, t8, 32, t7, 32, t6, 5);
    t29 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 73, 0LL);
    goto LAB2;

}

static void Always_124_3(char *t0)
{
    char t4[24];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 9824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 11928);
    *((int *)t2) = 1;
    t3 = (t0 + 9856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    t5 = (t0 + 6648U);
    t6 = *((char **)t5);
    t5 = (t0 + 5688U);
    t7 = *((char **)t5);
    t5 = (t0 + 5528U);
    t8 = *((char **)t5);
    t5 = (t0 + 8008);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t12 = (t9 + 4);
    t13 = (t11 + 16);
    t14 = (t11 + 20);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 7);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 7);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 3U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 3U);
    xsi_vlogtype_concat(t4, 71, 71, 4U, t9, 2, t8, 32, t7, 32, t6, 5);
    t21 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t21, t4, 0, 0, 71, 0LL);
    goto LAB2;

}

static void Cont_129_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 11944);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_130_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 129);
    xsi_driver_vfirst_trans(t5, 0, 128);
    t10 = (t0 + 11960);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_131_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 73);
    xsi_driver_vfirst_trans(t5, 0, 72);
    t10 = (t0 + 11976);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_132_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 8168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 71);
    xsi_driver_vfirst_trans(t5, 0, 70);
    t10 = (t0 + 11992);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_133_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 11064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t0 + 12376);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 12008);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_134_9(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 11312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 16);
    t8 = (t4 + 20);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = (t0 + 12440);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 1U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t28 = (t0 + 12024);
    *((int *)t28) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t5[8];
    char t38[8];
    char t46[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;

LAB0:    t1 = (t0 + 11560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 3608U);
    t37 = *((char **)t36);
    t36 = (t0 + 2648U);
    t39 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t39 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t36) == 0)
        goto LAB7;

LAB9:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;

LAB10:    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t37 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB11;

LAB12:
LAB13:    t79 = *((unsigned int *)t5);
    t80 = *((unsigned int *)t46);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = (t5 + 4);
    t83 = (t46 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB14;

LAB15:
LAB16:    t106 = (t0 + 12504);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t110, 0, 8);
    t111 = 1U;
    t112 = t111;
    t113 = (t78 + 4);
    t114 = *((unsigned int *)t78);
    t111 = (t111 & t114);
    t115 = *((unsigned int *)t113);
    t112 = (t112 & t115);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 | t111);
    t118 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t118 | t112);
    xsi_driver_vfirst_trans(t106, 0, 0);
    t119 = (t0 + 12040);
    *((int *)t119) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t38) = 1;
    goto LAB10;

LAB11:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t37 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB13;

LAB14:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t5 + 4);
    t93 = (t46 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t5);
    t97 = (t96 & t95);
    t98 = *((unsigned int *)t93);
    t99 = (~(t98));
    t100 = *((unsigned int *)t46);
    t101 = (t100 & t99);
    t102 = (~(t97));
    t103 = (~(t101));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    goto LAB16;

}


extern void work_m_03938584077394545892_3515808994_init()
{
	static char *pe[] = {(void *)Always_98_0,(void *)Always_107_1,(void *)Always_119_2,(void *)Always_124_3,(void *)Cont_129_4,(void *)Cont_130_5,(void *)Cont_131_6,(void *)Cont_132_7,(void *)Cont_133_8,(void *)Cont_134_9,(void *)implSig1_execute};
	xsi_register_didat("work_m_03938584077394545892_3515808994", "isim/test_isim_beh.exe.sim/work/m_03938584077394545892_3515808994.didat");
	xsi_register_executes(pe);
}
