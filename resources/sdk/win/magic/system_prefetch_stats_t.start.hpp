#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.DemandFilePageCount", demand_file_page_count, 0x0, 0x20, true, 0x7c0ed84728bb6d5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.DemandFileIOCount", demand_file_io_count, 0x20, 0x20, true, 0x921ccd68a570a8fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.TrickleFilePageCount", trickle_file_page_count, 0x40, 0x20, true, 0x9f43f7233b818d5b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.TrickleFileIOCount", trickle_file_io_count, 0x60, 0x20, true, 0xfb6a762d28009c4c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.DemandPrivatePageCount", demand_private_page_count, 0x80, 0x20, true, 0x41c247169ba76005)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.DemandPrivateIOCount", demand_private_io_count, 0xa0, 0x20, true, 0xede47bc27b5bccdd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.TricklePrivatePageCount", trickle_private_page_count, 0xc0, 0x20, true, 0xf50f51cd1dbfec8a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PREFETCH_STATS.TricklePrivateIOCount", trickle_private_io_count, 0xe0, 0x20, true, 0x6bb8c87e46a2cab)
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