// See LICENSE for license details.

#ifndef _HBIRD_UART_H
#define _HBIRD_UART_H

/* Register offsets */
/* #define UART_REG_TXFIFO         0x00 */
/* #define UART_REG_RXFIFO         0x04 */
/* #define UART_REG_TXCTRL         0x08 */
/* #define UART_REG_RXCTRL         0x0c */
/* #define UART_REG_IE             0x10 */
/* #define UART_REG_IP             0x14 */
/* #define UART_REG_DIV            0x18 */

/* TXCTRL register */
/* #define UART_TXEN               0x1 */
/* #define UART_TXWM(x)            (((x) & 0xffff) << 16) */

/* RXCTRL register */
/* #define UART_RXEN               0x1 */
/* #define UART_RXWM(x)            (((x) & 0xffff) << 16) */

/* IP register */
/* #define UART_IP_TXWM            0x1 */
/* #define UART_IP_RXWM            0x2 */


#define UART_RX   0
#define UART_TX   0
#define UART_IER  1
#define UART_FCR  2
#define UART_LCR  3
#define UART_MCR  4
#define UART_LSR  5
#define UART_MSR  6
#define UART_SCR  7
#define UART_DLL  0
#define UART_DLM  1

#define UART_MCR_LOOP   2
#define UART_LSR_DR     1
#define UART_LSR_THRE   0x20

#endif /* _HBIRD_UART_H */
