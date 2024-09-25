#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_KEY_VALUE_ENTRY.ValueName", value_name, 0x0, 0x40, true, 0x37f3583105892f03)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_ENTRY.DataLength", data_length, 0x40, 0x20, true, 0x65477a1868533ffb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_ENTRY.DataOffset", data_offset, 0x60, 0x20, true, 0x3c58d8c7188f760a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_ENTRY.Type", type, 0x80, 0x20, true, 0xeb61667bf06c5529)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif