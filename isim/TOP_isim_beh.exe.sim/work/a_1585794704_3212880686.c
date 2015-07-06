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
static const char *ng0 = "C:/Users/Anmol/Desktop/UART_v2/UART/debounce.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_1585794704_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3808);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3472);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 3552);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 3616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t3 = t1;
    memset(t3, (unsigned char)2, 7U);
    t4 = (t0 + 3680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB5;

LAB7:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t17 = (1 - 6);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t18 = (0 + t13);
    t1 = (t3 + t18);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB17;

LAB18:
LAB13:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t17 = (1 - 6);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t18 = (0 + t13);
    t1 = (t3 + t18);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB5;

LAB8:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t3 = t1;
    memset(t3, (unsigned char)2, 7U);
    t4 = (t0 + 3680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast(t4);

LAB23:    goto LAB5;

LAB9:    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t4 = t1;
    memset(t4, (unsigned char)2, 7U);
    t6 = (t0 + 3680);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 5880U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t4, t1, (unsigned char)3);
    t7 = (t11 + 12U);
    t12 = *((unsigned int *)t7);
    t13 = (1U * t12);
    t14 = (7U != t13);
    if (t14 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 3680);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 7U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_size_not_matching(7U, t13, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3744);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t3 = t1;
    memset(t3, (unsigned char)2, 7U);
    t4 = (t0 + 3680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB19:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3744);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3616);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3744);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

}


extern void work_a_1585794704_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1585794704_3212880686_p_0};
	xsi_register_didat("work_a_1585794704_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_1585794704_3212880686.didat");
	xsi_register_executes(pe);
}
