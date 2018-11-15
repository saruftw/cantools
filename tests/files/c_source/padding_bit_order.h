/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 28.8.1 Tue Oct 23 21:36:17 2018.
 */

#ifndef __PADDING_BIT_ORDER_H__
#define __PADDING_BIT_ORDER_H__

#include <stdint.h>
#include <unistd.h>

#ifndef EINVAL
#    define EINVAL -22
#endif

#define PADDING_BIT_ORDER_CAN_ID_MSG0 (0x01U)
#define PADDING_BIT_ORDER_CAN_ID_MSG1 (0x02U)
#define PADDING_BIT_ORDER_CAN_ID_MSG2 (0x03U)
#define PADDING_BIT_ORDER_CAN_ID_MSG3 (0x04U)
#define PADDING_BIT_ORDER_CAN_ID_MSG4 (0x05U)

/**
 * Signals in message MSG0.
 *
 * @param b
 *            Minimum: 0
 *            Maximum: 1
 *            Scale: 1
 *            Offset: 0
 * @param a
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param d
 *            Minimum: 0
 *            Maximum: 1
 *            Scale: 1
 *            Offset: 0
 * @param c
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg0_t {
    uint8_t b;
    uint16_t a;
    uint8_t d;
    uint16_t c;
};

/**
 * Signals in message MSG1.
 *
 * @param e
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param f
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param g
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param h
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg1_t {
    uint8_t e;
    uint16_t f;
    uint8_t g;
    uint16_t h;
};

/**
 * Signals in message MSG2.
 *
 * @param i
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param j
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 * @param k
 *            Minimum: 0
 *            Maximum: 32768
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg2_t {
    uint8_t i;
    uint8_t j;
    uint8_t k;
};

/**
 * Signals in message MSG3.
 *
 * @param l
 *            Minimum: 0
 *            Maximum: 18446744073709551615
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg3_t {
    uint64_t l;
};

/**
 * Signals in message MSG4.
 *
 * @param m
 *            Minimum: 0
 *            Maximum: 18446744073709551615
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg4_t {
    uint64_t m;
};

/**
 * Encode message MSG0.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg0_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg0_t *src_p,
    size_t size);

/**
 * Decode message MSG0.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg0_decode(
    struct padding_bit_order_msg0_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Encode message MSG1.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg1_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg1_t *src_p,
    size_t size);

/**
 * Decode message MSG1.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg1_decode(
    struct padding_bit_order_msg1_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Encode message MSG2.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg2_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg2_t *src_p,
    size_t size);

/**
 * Decode message MSG2.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg2_decode(
    struct padding_bit_order_msg2_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Encode message MSG3.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg3_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg3_t *src_p,
    size_t size);

/**
 * Decode message MSG3.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg3_decode(
    struct padding_bit_order_msg3_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Encode message MSG4.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg4_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg4_t *src_p,
    size_t size);

/**
 * Decode message MSG4.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg4_decode(
    struct padding_bit_order_msg4_t *dst_p,
    uint8_t *src_p,
    size_t size);

#endif
