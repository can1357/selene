#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_CACHED_PTE.GlobalTimeStamp", global_time_stamp, 0x0, 0x20, true, 0x616edb5d41835a9c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_CACHED_PTE.PteIndex", pte_index, 0x20, 0x20, true, 0xa8bd6ba7cbce5fb7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_CACHED_PTE.Long", _long, 0x0, 0x40, true, 0xcb11b0f66262dbcc)
#else
#define _m00
#define _m01
#define _m02
#endif