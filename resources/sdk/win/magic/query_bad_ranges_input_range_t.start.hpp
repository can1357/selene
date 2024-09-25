#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUERY_BAD_RANGES_INPUT_RANGE.StartOffset", start_offset, 0x0, 0x40, true, 0xc963e4bab20812fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUERY_BAD_RANGES_INPUT_RANGE.LengthInBytes", length_in_bytes, 0x40, 0x40, true, 0xe7eb26025a5c0eff)
#else
#define _m00
#define _m01
#endif