#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.Header", header, 0x0, 0x20, true, 0xd44c6e9aa79b3197)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.Flags", flags, 0x20, 0x20, true, 0xc9dad36e07d7ea47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::qos_sq_type_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqType", sq_type, 0x40, 0x20, true, 0x5dbed3d1b81821)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.FirstSqId", first_sq_id, 0x60, 0x20, true, 0x53b426f8ec61fa08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.MaxSqsToReturn", max_sqs_to_return, 0x80, 0x20, true, 0xa3c0cf0420a96f65)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqArrayOffset", sq_array_offset, 0xa0, 0x20, true, 0xb911a2dea13d681a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqParamsArrayOffset", sq_params_array_offset, 0xa0, 0x20, true, 0xe6f7c33b23516b1d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqArrayNumElements", sq_array_num_elements, 0xc0, 0x20, true, 0xdfb56161e2c64a4b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqParamsArrayNumElements", sq_params_array_num_elements, 0xc0, 0x20, true, 0xae62e5e6ceac43d0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqArrayElementSize", sq_array_element_size, 0xe0, 0x20, true, 0x28a76c27b37c26a3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.SqParamsArrayElementSize", sq_params_array_element_size, 0xe0, 0x20, true, 0x99df91fd48868544)
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
#define _m10
#endif