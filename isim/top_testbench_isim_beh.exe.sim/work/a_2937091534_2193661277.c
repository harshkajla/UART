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
static const char *ng0 = "C:/Users/Anmol/Desktop/UART_v2/UART/tx_uart.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_674763465_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_2937091534_2193661277_p_0(char *t0)
{
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    int t16;
    char *t17;
    char *t19;
    char *t20;
    static char *nl0[] = {&&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4672);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 4352);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2632U);
    t6 = *((char **)t4);
    t5 = *((unsigned char *)t6);
    t10 = (t5 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4544);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t1 = (t0 + 7152U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t16 = (t15 - 9);
    t12 = (t16 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t15);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t6 = (t3 + t14);
    t2 = *((unsigned char *)t6);
    t7 = (t0 + 4544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    *((unsigned char *)t17) = t2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 7152U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t2 = (t15 > 0);
    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4416);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 7210);
    t4 = (t0 + 4608);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB12:    goto LAB5;

LAB8:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 4416);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 9U, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t12 = (7 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t4 = (t0 + 4480);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_delta(t4, 1U, 8U, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2792U);
    t6 = *((char **)t4);
    t4 = (t0 + 7152U);
    t7 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t18, t6, t4, (unsigned char)3);
    t8 = (t18 + 12U);
    t12 = *((unsigned int *)t8);
    t13 = (1U * t12);
    t5 = (4U != t13);
    if (t5 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 4608);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB12;

LAB14:    xsi_size_not_matching(4U, t13, 0);
    goto LAB15;

}


extern void work_a_2937091534_2193661277_init()
{
	static char *pe[] = {(void *)work_a_2937091534_2193661277_p_0};
	xsi_register_didat("work_a_2937091534_2193661277", "isim/top_testbench_isim_beh.exe.sim/work/a_2937091534_2193661277.didat");
	xsi_register_executes(pe);
}
