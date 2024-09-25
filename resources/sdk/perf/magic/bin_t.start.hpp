#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_BIN.NumberOfBins", number_of_bins, 0x0, 0x20, true, 0x894d72fdea64068d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_BIN.TypeOfBin", type_of_bin, 0x20, 0x20, true, 0x931ddf732b322dad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::bin_range_t, 1>), "_PERF_BIN.BinsRanges", bins_ranges, 0x40, 0x80, true, 0x9929def98d1d527b)
#else
#define _m00
#define _m01
#define _m02
#endif