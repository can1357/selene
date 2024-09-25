#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.Version", version, 0x0, 0x0, false, 0xd3f2673298f1135b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.Flags", flags, 0x0, 0x0, false, 0x4ee381c300b47f1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.BinRange.Min", min, 0x0, 0x0, false, 0x5b54950acfcb77d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.BinRange.Max", max, 0x0, 0x0, false, 0x2ee22eef461e4551)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_bin_range_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.BinRange", bin_range, 0x0, 0x0, false, 0x7641d21a9d4cabcb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LcnRange.Min", min, 0x0, 0x0, false, 0xa78dddda6c76e845)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LcnRange.Max", max, 0x0, 0x0, false, 0xa59a66917ecc45bf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_lcn_range_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LcnRange", lcn_range, 0x0, 0x0, false, 0xb5a91d276d63f6b2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LengthRange.Min", min, 0x0, 0x0, false, 0x7fb07d25b5ee8ffb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LengthRange.Max", max, 0x0, 0x0, false, 0x91723c43641bf312)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_length_range_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter.LengthRange", length_range, 0x0, 0x0, false, 0xa50b7fa73ec70770)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_run_filter_t), "_QUERY_CACHED_RUNS_INPUT.RunFilter", run_filter, 0x0, 0x0, false, 0xa69d30fe35d5c7e9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.BinRange.Min", min, 0x0, 0x0, false, 0xe53e6d2d1e9cd91f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.BinRange.Max", max, 0x0, 0x0, false, 0x8bd4aa6d9bc1ddeb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_bin_range_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.BinRange", bin_range, 0x0, 0x0, false, 0x117e1d0d1ffccfe)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.LengthRange.Min", min, 0x0, 0x0, false, 0x6187fdfc45eb65c8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.LengthRange.Max", max, 0x0, 0x0, false, 0xde5b3029a73710ee)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_length_range_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter.LengthRange", length_range, 0x0, 0x0, false, 0x195e2d83d1271a7a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bin_filter_t), "_QUERY_CACHED_RUNS_INPUT.BinFilter", bin_filter, 0x0, 0x0, false, 0xb47514a9e6aac381)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif