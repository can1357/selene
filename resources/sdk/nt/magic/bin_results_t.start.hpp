#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BIN_RESULTS.NumberOfBins", number_of_bins, 0x0, 0x20, true, 0xdb9a25f34b00d9bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::bin_count_t, 1>), "_BIN_RESULTS.BinCounts", bin_counts, 0x40, 0xc0, true, 0x65e73219a7b4a54f)
#else
#define _m00
#define _m01
#endif