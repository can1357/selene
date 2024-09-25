#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Frame", frame, 0x0, 0x40, true, 0x1f56788f95a413c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rbx", rbx, 0x40, 0x40, true, 0x72ec3f5a22e33ca2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rsp", rsp, 0x80, 0x40, true, 0x518807b255729156)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rbp", rbp, 0xc0, 0x40, true, 0x932bf9fbf6958795)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rsi", rsi, 0x100, 0x40, true, 0xfe55516d37945463)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rdi", rdi, 0x140, 0x40, true, 0x286fc12288d304)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.R12", r12, 0x180, 0x40, true, 0x2874a60f08b7b2f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.R13", r13, 0x1c0, 0x40, true, 0xc6d64bf6bd2a984d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.R14", r14, 0x200, 0x40, true, 0xb65e1b83f9b4cd0b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.R15", r15, 0x240, 0x40, true, 0xe51459cff84f2d8f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JUMP_BUFFER.Rip", rip, 0x280, 0x40, true, 0x4919223f7e1fed40)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JUMP_BUFFER.MxCsr", mx_csr, 0x2c0, 0x20, true, 0xb25de7b9571031ae)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_JUMP_BUFFER.FpCsr", fp_csr, 0x2e0, 0x10, true, 0xaf24493b5250ab87)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm6", xmm6, 0x300, 0x80, true, 0xf2f5e9e747d2805b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm7", xmm7, 0x380, 0x80, true, 0xf8762bf40f53af9d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm8", xmm8, 0x400, 0x80, true, 0x8f3c7021a38c2ec7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm9", xmm9, 0x480, 0x80, true, 0x14965b403175a80c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm10", xmm10, 0x500, 0x80, true, 0x826a400c68b525d7)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm11", xmm11, 0x580, 0x80, true, 0x6629041d44bf29bb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm12", xmm12, 0x600, 0x80, true, 0xb73a2333fa608569)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm13", xmm13, 0x680, 0x80, true, 0x68f492a10e9b4b1a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm14", xmm14, 0x700, 0x80, true, 0x9e485f77e8f3ee06)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::setjmp_float128_t), "_JUMP_BUFFER.Xmm15", xmm15, 0x780, 0x80, true, 0xb51930a602b67afa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif