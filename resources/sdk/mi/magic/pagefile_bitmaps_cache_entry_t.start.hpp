#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.LengthTreeNode", length_tree_node, 0x0, 0xc0, true, 0x64f5b7219544a7ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.FreeListEntry", free_list_entry, 0x0, 0x80, true, 0x5ab171b9e4dfbefc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.LocationTreeNode", location_tree_node, 0xc0, 0xc0, true, 0x1661810793197971)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.StartingIndex", starting_index, 0x180, 0x20, true, 0x8cef2f1a1735e70e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.Length", length, 0x1a0, 0x20, true, 0xeab923c3174fc744)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif