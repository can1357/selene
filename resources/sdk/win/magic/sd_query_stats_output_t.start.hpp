#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SdsStreamSize", sds_stream_size, 0x0, 0x40, true, 0x1e6b3b2ea4e4c7be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SdsAllocationSize", sds_allocation_size, 0x40, 0x40, true, 0x6803b54142093777)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SiiStreamSize", sii_stream_size, 0x80, 0x40, true, 0x6380cdb2035acb92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SiiAllocationSize", sii_allocation_size, 0xc0, 0x40, true, 0xa28b1fbf5201ef55)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SdhStreamSize", sdh_stream_size, 0x100, 0x40, true, 0x7b91876e6b6e2c52)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.SdhAllocationSize", sdh_allocation_size, 0x140, 0x40, true, 0x1de8b7898bb05ad6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.NumSDTotal", num_sd_total, 0x180, 0x40, true, 0x3827df137da10e8d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_QUERY_STATS_OUTPUT.NumSDUnused", num_sd_unused, 0x1c0, 0x40, true, 0xdad9826916d4219f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif