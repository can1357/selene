#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_UNICODE_PREFIX_TABLE.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xa00691069b1fd9a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_UNICODE_PREFIX_TABLE.NameLength", name_length, 0x10, 0x10, true, 0x4cc2cf2a7c5e7583)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::unicode_prefix_table_entry_t*), "_UNICODE_PREFIX_TABLE.NextPrefixTree", next_prefix_tree, 0x40, 0x40, true, 0x7d3a04ca795a2258)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::unicode_prefix_table_entry_t*), "_UNICODE_PREFIX_TABLE.LastNextEntry", last_next_entry, 0x80, 0x40, true, 0x16ea6143f7ffe850)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif