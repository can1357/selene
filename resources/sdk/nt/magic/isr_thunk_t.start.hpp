#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISR_THUNK.PushImm", push_imm, 0x0, 0x8, true, 0xd7dbebdc897596c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISR_THUNK.Vector", vector, 0x8, 0x8, true, 0x1bf89a695c06271c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISR_THUNK.PushRbp", push_rbp, 0x10, 0x8, true, 0xf46dd71d0f21c6ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ISR_THUNK.JmpOp", jmp_op, 0x18, 0x8, true, 0x12c513d262550066)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ISR_THUNK.JmpOffset", jmp_offset, 0x20, 0x20, true, 0x6e88b091d7001293)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif