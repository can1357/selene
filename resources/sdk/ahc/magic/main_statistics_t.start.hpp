#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.Lookup", lookup, 0x0, 0x20, true, 0xce8862a79e298e6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.Remove", remove, 0x20, 0x20, true, 0x58e4f77f9f1ad6dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.Update", update, 0x40, 0x20, true, 0x151b813e4f2acb7c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.Clear", clear, 0x60, 0x20, true, 0x6c9ae069c1417f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.SnapStatistics", snap_statistics, 0x80, 0x20, true, 0xa48275b3301984b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.SnapCache", snap_cache, 0xa0, 0x20, true, 0xe0e9a4c7edd93d43)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_MAIN_STATISTICS.LookupProcess", lookup_process, 0xc0, 0x20, true, 0x764a10dd9317d3bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif