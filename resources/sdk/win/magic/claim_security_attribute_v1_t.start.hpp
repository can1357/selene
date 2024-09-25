#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CLAIM_SECURITY_ATTRIBUTE_V1.Name", name, 0x0, 0x40, true, 0x3c7239d758ffb638)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLAIM_SECURITY_ATTRIBUTE_V1.ValueType", value_type, 0x40, 0x10, true, 0x8ed2fae6608c2613)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_V1.Flags", flags, 0x60, 0x20, true, 0x84d328c856282a49)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_V1.ValueCount", value_count, 0x80, 0x20, true, 0xbd473e6191c57e85)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.pInt64", p_int64, 0x0, 0x40, true, 0x9b80399672184340)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.pUint64", p_uint64, 0x0, 0x40, true, 0x95b6d5e9061c60a4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.ppString", pp_string, 0x0, 0x40, true, 0x62429720d359cf9f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclaim_security_attribute_fqbn_value_t ), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.pFqbn", p_fqbn, 0x0, 0x40, true, 0x42863b0d6e17119b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclaim_security_attribute_octet_string_value_t ), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.pOctetString", p_octet_string, 0x0, 0x40, true, 0x4c47117e55df933c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_values_t), "_CLAIM_SECURITY_ATTRIBUTE_V1.Values", values, 0xc0, 0x40, true, 0x1d6526380f2004de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif