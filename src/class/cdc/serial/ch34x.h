/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Ha Thach (thach@tinyusb.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef TUSB_CH34X_H
#define TUSB_CH34X_H

// Protocol reference: https://github.com/torvalds/linux/blob/master/drivers/usb/serial/ch341.c

#define TU_CH34X_VID 0x1a86
#define TU_CH34X_PID_LIST \
        0x7523

// Commands
#define CH34X_REQ_READ_VERSION 0x5F
#define CH34X_REQ_WRITE_REG    0x9A
#define CH34X_REQ_READ_REG     0x95
#define CH34X_REQ_SERIAL_INIT  0xA1
#define CH34X_REQ_MODEM_CTRL   0xA4

#define CH34X_REG_BREAK        0x05
#define CH34X_REG_PRESCALER    0x12
#define CH34X_REG_DIVISOR      0x13
#define CH34X_REG_LCR          0x18
#define CH34X_REG_LCR2         0x25

#define CH34X_NBREAK_BITS      0x01

#define CH34X_LCR_ENABLE_RX    0x80
#define CH34X_LCR_ENABLE_TX    0x40
#define CH34X_LCR_MARK_SPACE   0x20
#define CH34X_LCR_PAR_EVEN     0x10
#define CH34X_LCR_ENABLE_PAR   0x08
#define CH34X_LCR_STOP_BITS_2  0x04
#define CH34X_LCR_CS8          0x03
#define CH34X_LCR_CS7          0x02
#define CH34X_LCR_CS6          0x01
#define CH34X_LCR_CS5          0x00

#define CH341_QUIRK_LIMITED_PRESCALER	BIT(0)
#define CH341_QUIRK_SIMULATE_BREAK	BIT(1)

#endif //TUSB_CH34X_H
