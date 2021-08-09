/***********************************************************************************************************************
 *                                                      ESourceOpen
 *                                           -----------------------------------
 *                                           explore and open  embedded platform
 * 
 * Contact information:
 * e-mail: 1786409879@qq.com / txh17778443952@169.com
 *                                                                                                              
 *                                                                                                              TXHopen
 *                                                                                                         encode:UTF-8
***********************************************************************************************************************/
/**
 * *****************************************************ESourceOPEN*****************************************************
 * @file      typedef.h
 * 
 * @brief     片外驱动：io口宏定义
 * 
 * @version   V0.00.01
 * 
 * @author    TXHopen (3332695529@qq.com)
 * 
 * @date      2021-08-08
 * 
 * @copyright Copyright (c) 2021
 * 
 * *****************************************************ESourceOPEN*****************************************************
 * 
 * *****************************************************ESourceOPEN*****************************************************
 **/
#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__





/* ------------------------------------------------------------------------------------------------------------------ */
sfr P0M0			= 0x93;
sfr P0M1			= 0x94;
sfr P1M0			= 0x91;
sfr P1M1			= 0x92;
sfr P2M0			= 0x95;
sfr P2M1			= 0x96;
sfr P3M0			= 0xB1;
sfr P3M1			= 0xB2;

/* ------------------------------------------------------------------------------------------------------------------ */
//准双向口
#define IO_IN_OUT_PUT_M0			((uint8_t)0x00)
#define IO_IN_OUT_PUT_M1			((uint8_t)0x00)
//推挽输出
#define IO_OUT_PUT_PP_M0			((uint8_t)0x00)
#define IO_OUT_PUT_PP_M1			((uint8_t)0x01)
//仅为输入(高阻)
#define IO_IN_PUT_ONLY_M0			((uint8_t)0x01)
#define IO_IN_PUT_ONLY_M1			((uint8_t)0x00)
//开漏
#define IO_OPEN_DRAIN_M0			((uint8_t)0x01)
#define IO_OPEN_DRAIN_M1			((uint8_t)0x01)


/* ------------------------------------------------------------------------------------------------------------------ */

#endif
