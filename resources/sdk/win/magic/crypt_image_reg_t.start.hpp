#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_IMAGE_REG.pszImage", psz_image, 0x0, 0x40, true, 0x3013a8b8a900c9f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_IMAGE_REG.cInterfaces", c_interfaces, 0x40, 0x20, true, 0x712ff8cbce0d598a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_interface_reg_t**), "_CRYPT_IMAGE_REG.rgpInterfaces", rgp_interfaces, 0x80, 0x40, true, 0x15ff5d12f4a4ebb)
#else
#define _m00
#define _m01
#define _m02
#endif