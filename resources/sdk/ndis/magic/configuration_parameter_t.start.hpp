#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::parameter_type_t), "_NDIS_CONFIGURATION_PARAMETER.ParameterType", parameter_type, 0x0, 0x20, true, 0x4a8143f548397289)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CONFIGURATION_PARAMETER.ParameterData.IntegerData", integer_data, 0x0, 0x20, true, 0x87bdbf884d7bcd4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_CONFIGURATION_PARAMETER.ParameterData.StringData", string_data, 0x0, 0x80, true, 0xf4474e850141729e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::binary_data_t), "_NDIS_CONFIGURATION_PARAMETER.ParameterData.BinaryData", binary_data, 0x0, 0x80, true, 0x867e5cbf4a58afcf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameter_data_t), "_NDIS_CONFIGURATION_PARAMETER.ParameterData", parameter_data, 0x40, 0x80, true, 0x1e694c745b9f7a78)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif