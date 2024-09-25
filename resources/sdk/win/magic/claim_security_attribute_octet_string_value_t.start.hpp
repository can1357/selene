#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE.pValue", p_value, 0x0, 0x40, true, 0x924c1266a0639658)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE.ValueLength", value_length, 0x40, 0x20, true, 0x15111481fb8a4e21)
#else
#define _m00
#define _m01
#endif