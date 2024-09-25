#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLAIM_SECURITY_ATTRIBUTES_INFORMATION.Version", version, 0x0, 0x10, true, 0x6e85ccc6579398ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLAIM_SECURITY_ATTRIBUTES_INFORMATION.AttributeCount", attribute_count, 0x20, 0x20, true, 0xf6397099a829a1ac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::claim_security_attribute_v1_t*), "_CLAIM_SECURITY_ATTRIBUTES_INFORMATION.Attribute.pAttributeV1", p_attribute_v1, 0x0, 0x40, true, 0x6690b080514db048)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_attribute_t), "_CLAIM_SECURITY_ATTRIBUTES_INFORMATION.Attribute", attribute, 0x40, 0x40, true, 0x343aa1edd5be2d9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif