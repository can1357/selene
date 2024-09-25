#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::bin_range_t), "_BIN_COUNT.BinRange", bin_range, 0x0, 0x80, true, 0xb2948bbe86a84760)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BIN_COUNT.BinCount", bin_count, 0x80, 0x20, true, 0x820bf78dce14bc39)
#else
#define _m00
#define _m01
#endif