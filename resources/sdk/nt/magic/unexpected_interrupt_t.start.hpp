#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNEXPECTED_INTERRUPT.PushImm", push_imm, 0x0, 0x8, true, 0xb63b662aa6e19f8a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNEXPECTED_INTERRUPT.Vector", vector, 0x8, 0x8, true, 0x369553c1b760618c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNEXPECTED_INTERRUPT.PushRbp", push_rbp, 0x10, 0x8, true, 0xe93284eb3b086078)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNEXPECTED_INTERRUPT.JmpOp", jmp_op, 0x18, 0x8, true, 0x282a27a4f1dd9a67)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_UNEXPECTED_INTERRUPT.JmpOffset", jmp_offset, 0x20, 0x20, true, 0x97280d5c57fc1877)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif