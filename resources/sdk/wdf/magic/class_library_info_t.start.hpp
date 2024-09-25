#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO.Size", size, 0x0, 0x20, true, 0x6b24e271d6bfe56d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_t), "_WDF_CLASS_LIBRARY_INFO.Version", version, 0x20, 0x60, true, 0x6132f45b7ce06d8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO.ClassLibraryInitialize", class_library_initialize, 0x80, 0x40, true, 0xec5bcd44405fc8cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO.ClassLibraryDeinitialize", class_library_deinitialize, 0xc0, 0x40, true, 0x9f447b07eebab90d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO.ClassLibraryBindClient", class_library_bind_client, 0x100, 0x40, true, 0xe7be10c9ce7e2490)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO.ClassLibraryUnbindClient", class_library_unbind_client, 0x140, 0x40, true, 0x322a0dc7f43b502c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif