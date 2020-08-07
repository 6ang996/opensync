/*
Copyright (c) 2015, Plume Design Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the Plume Design Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/* Frame (60 bytes) */
static const unsigned char pkt1[60] = {
0x62, 0xb4, 0xf7, 0xf0, 0x35, 0x7e, 0x00, 0xe0, /* b...5~.. */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt2[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt3[60] = {
0x62, 0xb4, 0xf7, 0xf0, 0x35, 0x7e, 0x00, 0xe0, /* b...5~.. */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt4[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt5[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt6[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt7[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt8[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt9[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt10[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt11[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt12[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt13[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt14[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt15[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt16[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt17[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt18[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt19[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt20[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt21[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt22[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt23[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt24[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt25[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt26[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt27[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt28[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt29[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt30[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt31[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt32[60] = {
0x62, 0xb4, 0xf7, 0xf0, 0x35, 0x7e, 0x00, 0xe0, /* b...5~.. */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt33[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt34[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt35[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt36[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt37[60] = {
0x62, 0xb4, 0xf7, 0xf0, 0x35, 0x7e, 0x00, 0xe0, /* b...5~.. */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt38[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt39[60] = {
0x62, 0xb4, 0xf7, 0xf0, 0x35, 0x7e, 0x00, 0xe0, /* b...5~.. */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xa8, /* ........ */
0x28, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (....... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (42 bytes) */
static const unsigned char pkt40[42] = {
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0x62, 0xb4, /* ..L ..b. */
0xf7, 0xf0, 0x35, 0x7e, 0x08, 0x06, 0x00, 0x01, /* ..5~.... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x62, 0xb4, /* ......b. */
0xf7, 0xf0, 0x35, 0x7e, 0xc0, 0xa8, 0x28, 0x01, /* ..5~..(. */
0x00, 0xe0, 0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, /* ..L .... */
0x28, 0x6f                                      /* (o */
};

/* Frame (60 bytes) */
static const unsigned char pkt41[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt42[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt43[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt44[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt45[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt46[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt47[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};

/* Frame (60 bytes) */
static const unsigned char pkt48[60] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0x08, 0x06, 0x00, 0x01, /* L ...... */
0x08, 0x00, 0x06, 0x04, 0x00, 0x02, 0x00, 0xe0, /* ........ */
0x4c, 0x20, 0x9f, 0x85, 0xc0, 0xa8, 0x28, 0x6f, /* L ....(o */
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xa8, /* ........ */
0x28, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* (o...... */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* ........ */
0x00, 0x00, 0x00, 0x00                          /* .... */
};
