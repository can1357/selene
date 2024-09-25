#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCGEN_TRACE_CONTEXT.RegistrationHandle", registration_handle, 0x0, 0x40, true, 0xc63fd63e14aa4285)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCGEN_TRACE_CONTEXT.Logger", logger, 0x40, 0x40, true, 0xdc85b2d91f2c6c81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCGEN_TRACE_CONTEXT.MatchAnyKeyword", match_any_keyword, 0x80, 0x40, true, 0x945584ae1ce86eac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCGEN_TRACE_CONTEXT.MatchAllKeyword", match_all_keyword, 0xc0, 0x40, true, 0x1afc23c0eae6bc9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCGEN_TRACE_CONTEXT.Flags", flags, 0x100, 0x20, true, 0x803d712e8d0f366)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCGEN_TRACE_CONTEXT.IsEnabled", is_enabled, 0x120, 0x20, true, 0x41f3cfc48f090795)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MCGEN_TRACE_CONTEXT.Level", level, 0x140, 0x8, true, 0x27c681b3b2146ed4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MCGEN_TRACE_CONTEXT.Reserve", reserve, 0x148, 0x8, true, 0xa1beca7cd159d3ad)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MCGEN_TRACE_CONTEXT.EnableBitsCount", enable_bits_count, 0x150, 0x10, true, 0x618af41202137106)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MCGEN_TRACE_CONTEXT.EnableBitMask", enable_bit_mask, 0x180, 0x40, true, 0xf9d3caf6918fb2bd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_MCGEN_TRACE_CONTEXT.EnableKeyWords", enable_key_words, 0x1c0, 0x40, true, 0xa160626591ffcae4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MCGEN_TRACE_CONTEXT.EnableLevel", enable_level, 0x200, 0x40, true, 0xe7c8f5c8c220cd81)
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
#endif