#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA.SupportedSecurityListLength", supported_security_list_length, 0x30, 0x10, true, 0x8b14b924ed40091b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA.SupportedSecurityProtocol", supported_security_protocol, 0x40, 0x0, true, 0xde8f59c2d28a8d8f)
#else
#define _m00
#define _m01
#endif