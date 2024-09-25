#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::string_cache_t), "ProcessIdentity._cachedPackageFamilyName", cached_package_family_name, 0x0, 0x40, true, 0x6b663284c0d49c01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::string_cache_t), "ProcessIdentity._cachedApplicationUserModelId", cached_application_user_model_id, 0x40, 0x40, true, 0xba07c8f9be43de5)
#else
#define _m00
#define _m01
#endif