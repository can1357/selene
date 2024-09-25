#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.Version", version, 0x0, 0x10, true, 0x2a2727218bd4646)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.AttributeCount", attribute_count, 0x20, 0x20, true, 0x460656908fbdc7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::token_security_attribute_v1_t*), "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.Attribute.pAttributeV1", p_attribute_v1, 0x0, 0x40, true, 0x456387d5f55eef3f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_attribute_t), "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.Attribute", attribute, 0x40, 0x40, true, 0xa7519f837463c5c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif