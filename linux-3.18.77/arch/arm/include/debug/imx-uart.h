/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __DEBUG_IMX_UART_H
#define __DEBUG_IMX_UART_H

#define IMX1_UART1_BASE_ADDR	0x00206000
#define IMX1_UART2_BASE_ADDR	0x00207000
#define IMX1_UART_BASE_ADDR(n)	IMX1_UART##n##_BASE_ADDR
#define IMX1_UART_BASE(n)	IMX1_UART_BASE_ADDR(n)

#define IMX21_UART1_BASE_ADDR	0x1000a000
#define IMX21_UART2_BASE_ADDR	0x1000b000
#define IMX21_UART3_BASE_ADDR	0x1000c000
#define IMX21_UART4_BASE_ADDR	0x1000d000
#define IMX21_UART_BASE_ADDR(n)	IMX21_UART##n##_BASE_ADDR
#define IMX21_UART_BASE(n)	IMX21_UART_BASE_ADDR(n)

#define IMX25_UART1_BASE_ADDR	0x43f90000
#define IMX25_UART2_BASE_ADDR	0x43f94000
#define IMX25_UART3_BASE_ADDR	0x5000c000
#define IMX25_UART4_BASE_ADDR	0x50008000
#define IMX25_UART5_BASE_ADDR	0x5002c000
#define IMX25_UART_BASE_ADDR(n)	IMX25_UART##n##_BASE_ADDR
#define IMX25_UART_BASE(n)	IMX25_UART_BASE_ADDR(n)

#define IMX31_UART1_BASE_ADDR	0x43f90000
#define IMX31_UART2_BASE_ADDR	0x43f94000
#define IMX31_UART3_BASE_ADDR	0x5000c000
#define IMX31_UART4_BASE_ADDR	0x43fb0000
#define IMX31_UART5_BASE_ADDR	0x43fb4000
#define IMX31_UART_BASE_ADDR(n)	IMX31_UART##n##_BASE_ADDR
#define IMX31_UART_BASE(n)	IMX31_UART_BASE_ADDR(n)

#define IMX35_UART1_BASE_ADDR	0x43f90000
#define IMX35_UART2_BASE_ADDR	0x43f94000
#define IMX35_UART3_BASE_ADDR	0x5000c000
#define IMX35_UART_BASE_ADDR(n)	IMX35_UART##n##_BASE_ADDR
#define IMX35_UART_BASE(n)	IMX35_UART_BASE_ADDR(n)

#define IMX50_UART1_BASE_ADDR	0x53fbc000
#define IMX50_UART2_BASE_ADDR	0x53fc0000
#define IMX50_UART3_BASE_ADDR	0x5000c000
#define IMX50_UART4_BASE_ADDR	0x53ff0000
#define IMX50_UART5_BASE_ADDR	0x63f90000
#define IMX50_UART_BASE_ADDR(n)	IMX50_UART##n##_BASE_ADDR
#define IMX50_UART_BASE(n)	IMX50_UART_BASE_ADDR(n)

#define IMX51_UART1_BASE_ADDR	0x73fbc000
#define IMX51_UART2_BASE_ADDR	0x73fc0000
#define IMX51_UART3_BASE_ADDR	0x7000c000
#define IMX51_UART_BASE_ADDR(n)	IMX51_UART##n##_BASE_ADDR
#define IMX51_UART_BASE(n)	IMX51_UART_BASE_ADDR(n)

#define IMX53_UART1_BASE_ADDR	0x53fbc000
#define IMX53_UART2_BASE_ADDR	0x53fc0000
#define IMX53_UART3_BASE_ADDR	0x5000c000
#define IMX53_UART4_BASE_ADDR	0x53ff0000
#define IMX53_UART5_BASE_ADDR	0x63f90000
#define IMX53_UART_BASE_ADDR(n)	IMX53_UART##n##_BASE_ADDR
#define IMX53_UART_BASE(n)	IMX53_UART_BASE_ADDR(n)

#define IMX6Q_UART1_BASE_ADDR	0x02020000
#define IMX6Q_UART2_BASE_ADDR	0x021e8000
#define IMX6Q_UART3_BASE_ADDR	0x021ec000
#define IMX6Q_UART4_BASE_ADDR	0x021f0000
#define IMX6Q_UART5_BASE_ADDR	0x021f4000
#define IMX6Q_UART_BASE_ADDR(n)	IMX6Q_UART##n##_BASE_ADDR
#define IMX6Q_UART_BASE(n)	IMX6Q_UART_BASE_ADDR(n)

#define IMX6SL_UART1_BASE_ADDR	0x02020000
#define IMX6SL_UART2_BASE_ADDR	0x02024000
#define IMX6SL_UART3_BASE_ADDR	0x02034000
#define IMX6SL_UART4_BASE_ADDR	0x02038000
#define IMX6SL_UART5_BASE_ADDR	0x02018000
#define IMX6SL_UART_BASE_ADDR(n) IMX6SL_UART##n##_BASE_ADDR
#define IMX6SL_UART_BASE(n)	IMX6SL_UART_BASE_ADDR(n)

#define IMX6SX_UART1_BASE_ADDR	0x02020000
#define IMX6SX_UART2_BASE_ADDR	0x021e8000
#define IMX6SX_UART3_BASE_ADDR	0x021ec000
#define IMX6SX_UART4_BASE_ADDR	0x021f0000
#define IMX6SX_UART5_BASE_ADDR	0x021f4000
#define IMX6SX_UART6_BASE_ADDR	0x022a0000
#define IMX6SX_UART_BASE_ADDR(n) IMX6SX_UART##n##_BASE_ADDR
#define IMX6SX_UART_BASE(n)	IMX6SX_UART_BASE_ADDR(n)

#define IMX_DEBUG_UART_BASE(soc) soc##_UART_BASE(CONFIG_DEBUG_IMX_UART_PORT)

#ifdef CONFIG_DEBUG_IMX1_UART
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX1)
#elif defined(CONFIG_DEBUG_IMX21_IMX27_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX21)
#elif defined(CONFIG_DEBUG_IMX25_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX25)
#elif defined(CONFIG_DEBUG_IMX31_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX31)
#elif defined(CONFIG_DEBUG_IMX35_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX35)
#elif defined(CONFIG_DEBUG_IMX50_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX50)
#elif defined(CONFIG_DEBUG_IMX51_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX51)
#elif defined(CONFIG_DEBUG_IMX53_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX53)
#elif defined(CONFIG_DEBUG_IMX6Q_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX6Q)
#elif defined(CONFIG_DEBUG_IMX6SL_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX6SL)
#elif defined(CONFIG_DEBUG_IMX6SX_UART)
#define UART_PADDR	IMX_DEBUG_UART_BASE(IMX6SX)
#endif

#endif /* __DEBUG_IMX_UART_H */
