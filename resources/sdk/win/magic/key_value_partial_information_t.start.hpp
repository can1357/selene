#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_PARTIAL_INFORMATION.TitleIndex", title_index, 0x0, 0x20, true, 0x24ab177febd555be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_PARTIAL_INFORMATION.Type", type, 0x20, 0x20, true, 0xe9b7388e36a27ba0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_PARTIAL_INFORMATION.DataLength", data_length, 0x40, 0x20, true, 0x684aca4f7dfc9d2e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_KEY_VALUE_PARTIAL_INFORMATION.Data", data, 0x60, 0x8, true, 0xbf04873b2740045f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif