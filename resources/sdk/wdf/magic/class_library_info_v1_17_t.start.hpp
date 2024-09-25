#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO_V1_17.Size", size, 0x0, 0x0, false, 0xceb9be7a9a1bdf6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_17_t), "_WDF_CLASS_LIBRARY_INFO_V1_17.Version", version, 0x0, 0x0, false, 0xe3aa7d6130cdd8a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO_V1_17.ClassLibraryInitialize", class_library_initialize, 0x0, 0x0, false, 0xb16de5627d1f5f4b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO_V1_17.ClassLibraryDeinitialize", class_library_deinitialize, 0x0, 0x0, false, 0xf987e5ee3e52de79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_17.ClassLibraryBindClient", class_library_bind_client, 0x0, 0x0, false, 0x5c79f0da5e37ade3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_17.ClassLibraryUnbindClient", class_library_unbind_client, 0x0, 0x0, false, 0xf9441d25d3a4a803)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif