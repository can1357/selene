#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE.PageCode", page_code, 0x0, 0x8, true, 0xad7702aaa7478c7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE.PageLength", page_length, 0x10, 0x10, true, 0xca8b65defeeb986)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE.GenerationCode", generation_code, 0x20, 0x20, true, 0x9adf8fda9b20f137)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ses_additional_element_status_descriptor_t, 1>), "_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE.Descriptors", descriptors, 0x40, 0x20, true, 0x889abc644a4817b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif