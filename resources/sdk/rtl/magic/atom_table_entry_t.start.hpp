#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::atom_table_entry_t*), "_RTL_ATOM_TABLE_ENTRY.HashLink", hash_link, 0x0, 0x40, true, 0xa3ec3eb37c28648c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_ATOM_TABLE_ENTRY.HandleIndex", handle_index, 0x40, 0x10, true, 0x5200ac496f427bad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_ATOM_TABLE_ENTRY.Atom", atom, 0x50, 0x10, true, 0x705041167ea6ba3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::atom_table_reference_t), "_RTL_ATOM_TABLE_ENTRY.Reference", reference, 0x80, 0xc0, true, 0x12474f9393c12ffc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_ATOM_TABLE_ENTRY.NameLength", name_length, 0x140, 0x8, true, 0x9bb6bb6e7392f12e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_RTL_ATOM_TABLE_ENTRY.Name", name, 0x150, 0x10, true, 0xdd0ef771736c1a6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif