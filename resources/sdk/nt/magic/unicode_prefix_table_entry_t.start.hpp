#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_UNICODE_PREFIX_TABLE_ENTRY.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xeea8e101606cabdb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_UNICODE_PREFIX_TABLE_ENTRY.NameLength", name_length, 0x10, 0x10, true, 0xcd165d34929328e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::unicode_prefix_table_entry_t*), "_UNICODE_PREFIX_TABLE_ENTRY.NextPrefixTree", next_prefix_tree, 0x40, 0x40, true, 0xd3888a49475c38d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::unicode_prefix_table_entry_t*), "_UNICODE_PREFIX_TABLE_ENTRY.CaseMatch", case_match, 0x80, 0x40, true, 0x6d800a17fe837bde)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "_UNICODE_PREFIX_TABLE_ENTRY.Links", links, 0xc0, 0xc0, true, 0x19aaeec741b4199f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_UNICODE_PREFIX_TABLE_ENTRY.Prefix", prefix, 0x180, 0x40, true, 0x80ecbffa85623f5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif