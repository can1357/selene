#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADAPTER_CONTROL_LIST.MaxControlType", max_control_type, 0x0, 0x20, true, 0x29a210c37d72b5ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 19>), "_ADAPTER_CONTROL_LIST.SupportedTypeList", supported_type_list, 0x20, 0xa0, true, 0xca124257c6839875)
#else
#define _m00
#define _m01
#endif