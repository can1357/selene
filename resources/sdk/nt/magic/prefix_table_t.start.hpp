#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PREFIX_TABLE.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xbec265bf25a5c027)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PREFIX_TABLE.NameLength", name_length, 0x10, 0x10, true, 0xf0c7337c4f79c22d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::prefix_table_entry_t*), "_PREFIX_TABLE.NextPrefixTree", next_prefix_tree, 0x40, 0x40, true, 0xe291a1ebae50f9d1)
#else
#define _m00
#define _m01
#define _m02
#endif