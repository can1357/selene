#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_BAD_RANGES_INPUT.Flags", flags, 0x0, 0x20, true, 0x8f68277520af60e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_BAD_RANGES_INPUT.NumRanges", num_ranges, 0x20, 0x20, true, 0xec5862872832aefa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::query_bad_ranges_input_range_t, 1>), "_QUERY_BAD_RANGES_INPUT.Ranges", ranges, 0x40, 0x80, true, 0xaf93da192dbf2591)
#else
#define _m00
#define _m01
#define _m02
#endif