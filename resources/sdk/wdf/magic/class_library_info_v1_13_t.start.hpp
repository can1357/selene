#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO_V1_13.Size", size, 0x0, 0x0, false, 0xcd5f219cf5b1a506)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_13_t), "_WDF_CLASS_LIBRARY_INFO_V1_13.Version", version, 0x0, 0x0, false, 0x99b3d3af8d6013cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO_V1_13.ClassLibraryInitialize", class_library_initialize, 0x0, 0x0, false, 0xbfc4c3e62a992edd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO_V1_13.ClassLibraryDeinitialize", class_library_deinitialize, 0x0, 0x0, false, 0x219a7096fa1cf3b6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_13.ClassLibraryBindClient", class_library_bind_client, 0x0, 0x0, false, 0xabdaafc5ed440ad5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_13.ClassLibraryUnbindClient", class_library_unbind_client, 0x0, 0x0, false, 0xdc502efef4c25566)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif