#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROVIDER_REF.dwInterface", dw_interface, 0x0, 0x20, true, 0x3d83ad414f94631e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_PROVIDER_REF.pszFunction", psz_function, 0x40, 0x40, true, 0x9485b3a7c16ee162)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_PROVIDER_REF.pszProvider", psz_provider, 0x80, 0x40, true, 0x7b937c2669195a90)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROVIDER_REF.cProperties", c_properties, 0xc0, 0x20, true, 0xa2fa8762fcaadb36)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_property_ref_t**), "_CRYPT_PROVIDER_REF.rgpProperties", rgp_properties, 0x100, 0x40, true, 0x883be1bccfdca386)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_image_ref_t*), "_CRYPT_PROVIDER_REF.pUM", p_um, 0x140, 0x40, true, 0xfaf0e394884d959f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_image_ref_t*), "_CRYPT_PROVIDER_REF.pKM", p_km, 0x180, 0x40, true, 0x21f702c577e1ca78)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif