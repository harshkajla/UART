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
static const char *ng0 = "C:/Users/Anmol/Desktop/UART_v2/UART/rx_uart.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_3170334674_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    unsigned char t19;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4360);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 7388);
    t6 = (t0 + 4456);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 7393);
    t5 = (t0 + 4520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t2 = (t0 + 7280U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t5, t2, (unsigned char)3);
    t7 = (t11 + 12U);
    t12 = *((unsigned int *)t7);
    t13 = (1U * t12);
    t4 = (9U != t13);
    if (t4 == 1)
        goto LAB7;

LAB8:    t8 = (t0 + 4520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 9U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7280U);
    t5 = (t0 + 7402);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (8 - 0);
    t12 = (t16 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB7:    xsi_size_not_matching(9U, t13, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 7411);
    t10 = (t0 + 4520);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 9U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7296U);
    t5 = (t0 + 7420);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (4 - 0);
    t12 = (t16 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7296U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (5U != t13);
    if (t3 == 1)
        goto LAB15;

LAB16:    t7 = (t0 + 4456);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB13:    goto LAB10;

LAB12:    xsi_set_current_line(44, ng0);
    t8 = (t0 + 7425);
    t10 = (t0 + 4456);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 7430);
    t5 = (t0 + 4584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB15:    xsi_size_not_matching(5U, t13, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 7312U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t5, t1, (unsigned char)3);
    t7 = (t11 + 12U);
    t12 = *((unsigned int *)t7);
    t13 = (1U * t12);
    t19 = (5U != t13);
    if (t19 == 1)
        goto LAB20;

LAB21:    t8 = (t0 + 4584);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB18;

LAB20:    xsi_size_not_matching(5U, t13, 0);
    goto LAB21;

}

static void work_a_3170334674_3212880686_p_1(char *t0)
{
    char t12[16];
    char t15[16];
    char t25[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    static char *nl0[] = {&&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7435);
    t6 = (t0 + 4648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);

LAB3:    t1 = (t0 + 4376);
    *((int *)t1) = 1;

LAB1:    return;
LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(66, ng0);
    t5 = (t0 + 7439);
    t7 = (t0 + 4648);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7296U);
    t5 = (t0 + 7443);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (4 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7296U);
    t5 = (t0 + 7453);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (4 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB5;

LAB8:    xsi_set_current_line(68, ng0);
    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t8 = (t0 + 7312U);
    t10 = (t0 + 7448);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 4;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (4 - 0);
    t14 = (t18 * 1);
    t14 = (t14 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t14;
    t4 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t9, t8, t10, t15);
    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(69, ng0);
    t17 = (t0 + 4776);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)1;
    xsi_driver_first_trans_fast(t17);
    goto LAB12;

LAB14:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 7328U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t15, t9, t8, (unsigned char)3);
    t11 = (t15 + 12U);
    t14 = *((unsigned int *)t11);
    t23 = (1U * t14);
    t4 = (4U != t23);
    if (t4 == 1)
        goto LAB17;

LAB18:    t16 = (t0 + 4648);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7312U);
    t5 = (t0 + 7458);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (4 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7328U);
    t5 = (t0 + 7463);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (4 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t14 = (7 - 6);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t1 = (t2 + t24);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t13 = (0 - 6);
    t26 = (t13 * -1);
    t26 = (t26 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t26;
    t5 = xsi_base_array_concat(t5, t12, t6, (char)97, t1, t15, (char)99, (unsigned char)3, (char)101);
    t26 = (7U + 1U);
    t3 = (8U != t26);
    if (t3 == 1)
        goto LAB27;

LAB28:    t8 = (t0 + 4840);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    memcpy(t16, t5, 8U);
    xsi_driver_first_trans_fast(t8);

LAB25:
LAB20:    goto LAB15;

LAB17:    xsi_size_not_matching(4U, t23, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t14 = (7 - 6);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t8 = (t9 + t24);
    t11 = ((IEEE_P_2592010699) + 4024);
    t16 = (t25 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 6;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 6);
    t26 = (t18 * -1);
    t26 = (t26 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t26;
    t10 = xsi_base_array_concat(t10, t15, t11, (char)97, t8, t25, (char)99, (unsigned char)2, (char)101);
    t26 = (7U + 1U);
    t4 = (8U != t26);
    if (t4 == 1)
        goto LAB22;

LAB23:    t17 = (t0 + 4840);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 8U);
    xsi_driver_first_trans_fast(t17);
    goto LAB20;

LAB22:    xsi_size_not_matching(8U, t26, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(79, ng0);
    t8 = (t0 + 4776);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t16 = *((char **)t11);
    *((unsigned char *)t16) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB25;

LAB27:    xsi_size_not_matching(8U, t26, 0);
    goto LAB28;

}


extern void work_a_3170334674_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3170334674_3212880686_p_0,(void *)work_a_3170334674_3212880686_p_1};
	xsi_register_didat("work_a_3170334674_3212880686", "isim/rx_uart_isim_beh.exe.sim/work/a_3170334674_3212880686.didat");
	xsi_register_executes(pe);
}
