#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptoken_security_attributes_information_t ), "_TOKEN_SECURITY_ATTRIBUTES_AND_OPERATION_INFORMATION.Attributes", attributes, 0x0, 0x40, true, 0x33ae07de211bf005)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::token_security_attribute_operation_t*), "_TOKEN_SECURITY_ATTRIBUTES_AND_OPERATION_INFORMATION.Operations", operations, 0x40, 0x40, true, 0xa7d5f509a0277c4c)
#else
#define _m00
#define _m01
#endif