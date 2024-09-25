#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ATTRIBUTES.cAttr", c_attr, 0x0, 0x20, true, 0xfc2604030c2094f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CRYPT_ATTRIBUTES.rgAttr", rg_attr, 0x40, 0x40, true, 0x155e19b721f356e7)
#else
#define _m00
#define _m01
#endif