#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_FULL_INFORMATION.TitleIndex", title_index, 0x0, 0x20, true, 0x16b514b37285c895)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_FULL_INFORMATION.Type", type, 0x20, 0x20, true, 0x95169fe5bc6893d4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_FULL_INFORMATION.DataOffset", data_offset, 0x40, 0x20, true, 0x1c632d326253825f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_FULL_INFORMATION.DataLength", data_length, 0x60, 0x20, true, 0xdf3e8b18a7e2670f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_FULL_INFORMATION.NameLength", name_length, 0x80, 0x20, true, 0x3b537023d1c3f8c7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_VALUE_FULL_INFORMATION.Name", name, 0xa0, 0x10, true, 0xf2a70a538d8b3b72)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif