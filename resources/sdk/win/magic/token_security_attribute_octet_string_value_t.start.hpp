#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TOKEN_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE.pValue", p_value, 0x0, 0x40, true, 0x7b4db2e9d2071606)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE.ValueLength", value_length, 0x40, 0x20, true, 0x5cb2315417977323)
#else
#define _m00
#define _m01
#endif