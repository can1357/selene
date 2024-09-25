#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_STATISTICS.DirtyPages", dirty_pages, 0x0, 0x40, true, 0x680379cbe855fc8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_STATISTICS.DirtyPagesLastScan", dirty_pages_last_scan, 0x40, 0x40, true, 0x29bc106f2cfc69ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIRTY_PAGE_STATISTICS.DirtyPagesScheduledLastScan", dirty_pages_scheduled_last_scan, 0x80, 0x20, true, 0xc469ab19518c6005)
#else
#define _m00
#define _m01
#define _m02
#endif