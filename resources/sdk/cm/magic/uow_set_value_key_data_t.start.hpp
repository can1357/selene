#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_UOW_SET_VALUE_KEY_DATA.PreparedCell", prepared_cell, 0x0, 0x20, true, 0x98a2ea6d32659bc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_UOW_SET_VALUE_KEY_DATA.OldValueCell", old_value_cell, 0x20, 0x20, true, 0x3af6705ca4e603b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_UOW_SET_VALUE_KEY_DATA.NameLength", name_length, 0x40, 0x10, true, 0xbe9bf0f524f64813)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_UOW_SET_VALUE_KEY_DATA.DataSize", data_size, 0x60, 0x20, true, 0xea62d222c2302711)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif