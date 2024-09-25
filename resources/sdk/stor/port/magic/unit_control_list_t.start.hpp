#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UNIT_CONTROL_LIST.MaxControlType", max_control_type, 0x0, 0x20, true, 0xb538abdb3909f6af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_UNIT_CONTROL_LIST.SupportedTypeList", supported_type_list, 0x20, 0x68, true, 0x3271787d208c7ce2)
#else
#define _m00
#define _m01
#endif