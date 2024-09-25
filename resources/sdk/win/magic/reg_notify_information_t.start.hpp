#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_NOTIFY_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xd3f6aae47d3730ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::reg_action_t), "_REG_NOTIFY_INFORMATION.Action", action, 0x20, 0x20, true, 0x63e17fe5890e37e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_NOTIFY_INFORMATION.KeyLength", key_length, 0x40, 0x20, true, 0xf338293aab98e9ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_REG_NOTIFY_INFORMATION.Key", key, 0x60, 0x10, true, 0xb6951e1918b3e781)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif