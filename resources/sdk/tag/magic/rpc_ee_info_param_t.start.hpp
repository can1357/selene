#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::extended_error_param_types_t), "tagRPC_EE_INFO_PARAM.ParameterType", parameter_type, 0x0, 0x20, true, 0x4699aca686fd2352)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagRPC_EE_INFO_PARAM.AnsiString", ansi_string, 0x40, 0x40, true, 0xcf173d22aad69281)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagRPC_EE_INFO_PARAM.UnicodeString", unicode_string, 0x40, 0x40, true, 0x7f23e559e54cb40f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_EE_INFO_PARAM.LVal", l_val, 0x40, 0x20, true, 0x194a47469a507c6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagRPC_EE_INFO_PARAM.SVal", s_val, 0x40, 0x10, true, 0x649ee8e592f2e7d2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagRPC_EE_INFO_PARAM.PVal", p_val, 0x40, 0x40, true, 0xf9d85bbf1004ab09)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::binary_param_t), "tagRPC_EE_INFO_PARAM.BVal", b_val, 0x40, 0x80, true, 0x17184b4300bd61a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif