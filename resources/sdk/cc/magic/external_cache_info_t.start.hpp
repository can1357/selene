#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t, uint32_t)>*), "_CC_EXTERNAL_CACHE_INFO.Callback", callback, 0x0, 0x40, true, 0x3dc7e380d9e1f636)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_statistics_t), "_CC_EXTERNAL_CACHE_INFO.DirtyPageStatistics", dirty_page_statistics, 0x40, 0xc0, true, 0x33a4ba23265940d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_EXTERNAL_CACHE_INFO.Links", links, 0x100, 0x80, true, 0x4a81c703f39e02b9)
#else
#define _m00
#define _m01
#define _m02
#endif