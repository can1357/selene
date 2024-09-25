#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PackageContext.userToken", user_token, 0x40, 0x40, true, 0x895a6220f8d5473c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PackageContext.isInitializedForDEH", is_initialized_for_deh, 0x80, 0x8, true, 0xdd1dbe69190e0c2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "PackageContext.packageIdKey", package_id_key, 0xc0, 0x40, true, 0x9fe92edcd80c5748)
#else
#define _m00
#define _m01
#define _m02
#endif