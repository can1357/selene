#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Name", name, 0x0, 0x20, true, 0xf0662e7165052c35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.ValueType", value_type, 0x20, 0x10, true, 0x39a293ea4efb0c74)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Flags", flags, 0x40, 0x20, true, 0x39eb371045b76a53)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.ValueCount", value_count, 0x60, 0x20, true, 0x11274782dfa0ef7d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pInt64", p_int64, 0x0, 0x20, true, 0x5e0e75f5c2ac9446)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pUint64", p_uint64, 0x0, 0x20, true, 0xc672720d6f38132b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.ppString", pp_string, 0x0, 0x20, true, 0x7f001212c142cca7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pFqbn", p_fqbn, 0x0, 0x20, true, 0x3a04048139b65f3f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pOctetString", p_octet_string, 0x0, 0x20, true, 0x206bb3e0aba62e5e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_values_t), "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values", values, 0x80, 0x20, true, 0x421b2882cfb53b2c)
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