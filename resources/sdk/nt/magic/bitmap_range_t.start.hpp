#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_BITMAP_RANGE.Links", links, 0x0, 0x80, true, 0x10f62685da0c1f48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_BITMAP_RANGE.BasePage", base_page, 0x80, 0x40, true, 0x1b92f3b99b69af14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BITMAP_RANGE.FirstDirtyPage", first_dirty_page, 0xc0, 0x20, true, 0xeb5d15cf5d7b7ed0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BITMAP_RANGE.LastDirtyPage", last_dirty_page, 0xe0, 0x20, true, 0x12490847a3f84f51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BITMAP_RANGE.DirtyPages", dirty_pages, 0x100, 0x20, true, 0x213d146d765cfa9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_BITMAP_RANGE.Bitmap", bitmap, 0x140, 0x40, true, 0x1216edf408feb9b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif