#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HSM_OPCODE.Tag", tag, 0x0, 0x20, true, 0xab543f1088bfdf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HSM_OPCODE.Code", code, 0x20, 0x20, true, 0x70edf6e14ea512db)
#else
#define _m00
#define _m01
#endif