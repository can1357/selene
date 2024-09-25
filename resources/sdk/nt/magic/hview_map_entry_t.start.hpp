#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HVIEW_MAP_ENTRY.ViewStart", view_start, 0x0, 0x0, false, 0xe649ec4cbbf33b6)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HVIEW_MAP_ENTRY.IsPinned", is_pinned, 0x0, 0x0, false, 0xb03c71f534e40f, 1, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HVIEW_MAP_ENTRY.Bcb", bcb, 0x0, 0x0, false, 0x7c407a75c3dfa688)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HVIEW_MAP_ENTRY.PinnedPages", pinned_pages, 0x0, 0x0, false, 0x78f26b7e722270af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP_ENTRY.Size", size, 0x0, 0x0, false, 0x4b55855be0895411)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif