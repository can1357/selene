#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_TOKEN_SECURITY_ATTRIBUTE_V1.Name", name, 0x0, 0x80, true, 0x3adc0985f274ce3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TOKEN_SECURITY_ATTRIBUTE_V1.ValueType", value_type, 0x80, 0x10, true, 0x6a58d0a418455944)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_V1.Flags", flags, 0xa0, 0x20, true, 0xa4c11d001049e838)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTE_V1.ValueCount", value_count, 0xc0, 0x20, true, 0xf77b412823df3d19)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.pInt64", p_int64, 0x0, 0x40, true, 0x2f3c4c180d7f6f72)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.pUint64", p_uint64, 0x0, 0x40, true, 0x8f947f8b510334c0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.pString", p_string, 0x0, 0x40, true, 0x7fdf7471ffd303ad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptoken_security_attribute_fqbn_value_t ), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.pFqbn", p_fqbn, 0x0, 0x40, true, 0x3f8bf71d2d797c60)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptoken_security_attribute_octet_string_value_t ), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.pOctetString", p_octet_string, 0x0, 0x40, true, 0x4cf2252e5dcf1418)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_values_t), "_TOKEN_SECURITY_ATTRIBUTE_V1.Values", values, 0x100, 0x40, true, 0x955af4459a834f95)
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