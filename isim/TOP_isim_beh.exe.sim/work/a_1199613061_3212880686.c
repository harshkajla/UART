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
static const char *ng0 = "C:/Users/Anmol/Desktop/UART_v2/UART/clock_gen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_1199613061_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t3 = (t0 + 4884U);
    t5 = (t0 + 4923);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 12;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (12 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 4884U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t7, t3, t1, (unsigned char)3);
    t5 = (t7 + 12U);
    t11 = *((unsigned int *)t5);
    t19 = (1U * t11);
    t2 = (13U != t19);
    if (t2 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 3072);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 13U);
    xsi_driver_first_trans_fast(t6);

LAB6:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3200);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(19, ng0);
    t9 = (t0 + 4936);
    t14 = (t0 + 3072);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 13U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 3136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_size_not_matching(13U, t19, 0);
    goto LAB9;

}


extern void work_a_1199613061_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1199613061_3212880686_p_0};
	xsi_register_didat("work_a_1199613061_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_1199613061_3212880686.didat");
	xsi_register_executes(pe);
}
