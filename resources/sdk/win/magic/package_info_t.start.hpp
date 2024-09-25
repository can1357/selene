#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PACKAGE_INFO.flags", flags, 0x20, 0x20, true, 0x3a472be8352a66ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_INFO.path", path, 0x40, 0x40, true, 0x4297aacfdb324f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_INFO.packageFullName", package_full_name, 0x80, 0x40, true, 0x45326c8ad2f098fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "PACKAGE_INFO.packageFamilyName", package_family_name, 0xc0, 0x40, true, 0xe6dc12ea98b875d5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::package_id_t), "PACKAGE_INFO.packageId", package_id, 0x100, 0x80, true, 0x1a1765a01423b442)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif