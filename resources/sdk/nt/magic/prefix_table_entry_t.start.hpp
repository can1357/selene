#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PREFIX_TABLE_ENTRY.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0x7e442a9e8a157b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PREFIX_TABLE_ENTRY.NameLength", name_length, 0x10, 0x10, true, 0x84f59bc6525002f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::prefix_table_entry_t*), "_PREFIX_TABLE_ENTRY.NextPrefixTree", next_prefix_tree, 0x40, 0x40, true, 0x48d0e260cc3ac611)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "_PREFIX_TABLE_ENTRY.Links", links, 0x80, 0xc0, true, 0x41f825923f36d87f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view*), "_PREFIX_TABLE_ENTRY.Prefix", prefix, 0x140, 0x40, true, 0x7b88ebf34eecc555)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif