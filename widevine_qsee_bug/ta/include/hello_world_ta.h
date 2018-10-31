/*
 * Copyright (c) 2016-2017, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef TA_HELLO_WORLD_H
#define TA_HELLO_WORLD_H


/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */
#define TA_HELLO_WORLD_UUID \
	{ 0x8aaaf200, 0x2450, 0x11e4, \
		{ 0xab, 0xe2, 0x00, 0x02, 0xde, 0xed, 0xbe, 0xef} }

/* The function IDs implemented in this TA */
#define TA_HELLO_WORLD_CMD_INC_VALUE		0
#define TA_HELLO_WORLD_CMD_DEC_VALUE		1

#define TA_HELLO_WORLD_CMD_INC_VALUE2		2
#define TA_HELLO_WORLD_CMD_DEC_VALUE2		3

#define TA_HELLO_WORLD_CMD_INC_VALUE3		4
#define TA_HELLO_WORLD_CMD_DEC_VALUE3		5

#define TA_HELLO_WORLD_CMD_INC_VALUE4		6
#define TA_HELLO_WORLD_CMD_DEC_VALUE4		7

#define TA_HELLO_WORLD_CMD_INC_VALUE5		8
#define TA_HELLO_WORLD_CMD_DEC_VALUE5		9

#define TA_HELLO_WORLD_CMD_INC_VALUE6		10
#define TA_HELLO_WORLD_CMD_DEC_VALUE6		11

#define TA_HELLO_WORLD_CMD_INC_VALUE7		12
#define TA_HELLO_WORLD_CMD_DEC_VALUE7		13

#define TA_HELLO_WORLD_CMD_INC_VALUE8		14
#define TA_HELLO_WORLD_CMD_DEC_VALUE8		15

#define TA_HELLO_WORLD_CMD_INC_VALUE9		16

// this is where the bug is
#define TA_HELLO_WORLD_CMD_DEC_VALUE9		17

#define TA_HELLO_WORLD_CMD_INC_VALUE10		18
#define TA_HELLO_WORLD_CMD_DEC_VALUE10		19

#define TA_HELLO_WORLD_CMD_INC_VALUE11		20
#define TA_HELLO_WORLD_CMD_DEC_VALUE11		21

#define TA_HELLO_WORLD_CMD_INC_VALUE12		22
#define TA_HELLO_WORLD_CMD_DEC_VALUE12		23

typedef struct {
    unsigned int a;
    unsigned long tmp1;
    float b;
    char buff[64];
    double kj;
    unsigned buflen;
} BUGSTRU;


#endif /*TA_HELLO_WORLD_H*/
