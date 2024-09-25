#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_ERASE.Type", type, 0x0, 0x20, true, 0xaf63184d03de167c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_ERASE.Immediate", immediate, 0x20, 0x8, true, 0x15f183c40939f943)
#else
#define _m00
#define _m01
#endif