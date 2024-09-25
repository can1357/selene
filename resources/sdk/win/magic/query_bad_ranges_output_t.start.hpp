#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_BAD_RANGES_OUTPUT.Flags", flags, 0x0, 0x20, true, 0x76a1e3b503bac889)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_BAD_RANGES_OUTPUT.NumBadRanges", num_bad_ranges, 0x20, 0x20, true, 0x65168f5d06deca3c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUERY_BAD_RANGES_OUTPUT.NextOffsetToLookUp", next_offset_to_look_up, 0x40, 0x40, true, 0xeceef9709d256878)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::query_bad_ranges_output_range_t, 1>), "_QUERY_BAD_RANGES_OUTPUT.BadRanges", bad_ranges, 0x80, 0xc0, true, 0x18b29e33a7bca9b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif