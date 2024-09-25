#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::large_page_lists_changing_t*), "_MI_LARGE_PAGE_LISTS_CHANGING.Next", next, 0x0, 0x40, true, 0x4a0ebd1d08389a5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_LARGE_PAGE_LISTS_CHANGING.Gate", gate, 0x40, 0xc0, true, 0xe778b13cba284254)
#else
#define _m00
#define _m01
#endif