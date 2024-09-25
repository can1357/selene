#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COR_SECATTR.tkCtor", tk_ctor, 0x0, 0x20, true, 0xa3242e551e1f6716)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "COR_SECATTR.pCustomAttribute", p_custom_attribute, 0x40, 0x40, true, 0x3ecc273d207fbb03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COR_SECATTR.cbCustomAttribute", cb_custom_attribute, 0x80, 0x20, true, 0xc7f05234d06ab72a)
#else
#define _m00
#define _m01
#define _m02
#endif