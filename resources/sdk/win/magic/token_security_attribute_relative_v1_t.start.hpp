#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Name", name, 0x0, 0x20, true, 0xc5ae76795b849272)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.ValueType", value_type, 0x20, 0x10, true, 0x3a4dada5ff5cc084)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Flags", flags, 0x40, 0x20, true, 0x707acd44aced5119)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.ValueCount", value_count, 0x60, 0x20, true, 0xbe2923dc4f3d4512)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pInt64", p_int64, 0x0, 0x20, true, 0x3e0727ea5410f924)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pUint64", p_uint64, 0x0, 0x20, true, 0x1481cb2dfd5a3faa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.ppString", pp_string, 0x0, 0x20, true, 0x133fd6735b541753)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pFqbn", p_fqbn, 0x0, 0x20, true, 0x1a0d5080b1584016)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.pOctetString", p_octet_string, 0x0, 0x20, true, 0xbe72fe8a49b705c8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_values_t), "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values", values, 0x80, 0x20, true, 0x8f5b53a3327790a8)
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