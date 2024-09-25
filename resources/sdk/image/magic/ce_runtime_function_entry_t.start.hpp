#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.FuncStart", func_start, 0x0, 0x20, true, 0xc4d172540e659adb)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.PrologLen", prolog_len, 0x20, 0x8, true, 0x35e301ca36df0ecb, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.FuncLen", func_len, 0x28, 0x16, true, 0xcd9a099cca33e812, 22, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.ThirtyTwoBit", thirty_two_bit, 0x3e, 0x1, true, 0x2f88cb330b6dca62, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_CE_RUNTIME_FUNCTION_ENTRY.ExceptionFlag", exception_flag, 0x3f, 0x1, true, 0xe24548dac86232c4, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif