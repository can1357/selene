#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.cbSize", cb_size, 0x0, 0x20, true, 0xf56702295f2f899f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_crypt_object_locator_provider_get_t ), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.pfnGet", pfn_get, 0x40, 0x40, true, 0x2b3f9952881e331d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, void*)>*), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.pfnRelease", pfn_release, 0x80, 0x40, true, 0xb5e30cfcf29803fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, const wchar_t*)>*), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.pfnFreePassword", pfn_free_password, 0xc0, 0x40, true, 0x30df6116f7c50656)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t*)>*), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.pfnFree", pfn_free, 0x100, 0x40, true, 0xe8e1ae4e7441c624)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_crypt_object_locator_provider_free_identifier_t ), "_CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE.pfnFreeIdentifier", pfn_free_identifier, 0x140, 0x40, true, 0x36f6db4fd3004331)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif