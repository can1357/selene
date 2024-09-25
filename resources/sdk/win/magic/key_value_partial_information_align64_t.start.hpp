#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_PARTIAL_INFORMATION_ALIGN64.Type", type, 0x0, 0x20, true, 0x8aa7043461dbdf29)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_VALUE_PARTIAL_INFORMATION_ALIGN64.DataLength", data_length, 0x20, 0x20, true, 0x88690250ad0231d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_KEY_VALUE_PARTIAL_INFORMATION_ALIGN64.Data", data, 0x40, 0x8, true, 0x3e2683d35d8c5327)
#else
#define _m00
#define _m01
#define _m02
#endif