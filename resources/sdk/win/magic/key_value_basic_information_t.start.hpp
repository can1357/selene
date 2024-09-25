#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_BASIC_INFORMATION.TitleIndex", title_index, 0x0, 0x20, true, 0x6bdbe3025d0da35c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_BASIC_INFORMATION.Type", type, 0x20, 0x20, true, 0x69c895ec7d310c0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_BASIC_INFORMATION.NameLength", name_length, 0x40, 0x20, true, 0x8789f6593896b6f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_VALUE_BASIC_INFORMATION.Name", name, 0x60, 0x10, true, 0x6adf2460cd479c3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif