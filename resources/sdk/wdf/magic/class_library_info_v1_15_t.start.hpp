#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO_V1_15.Size", size, 0x0, 0x0, false, 0x816d93e11f14b996)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_15_t), "_WDF_CLASS_LIBRARY_INFO_V1_15.Version", version, 0x0, 0x0, false, 0xea41ff62adc66879)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO_V1_15.ClassLibraryInitialize", class_library_initialize, 0x0, 0x0, false, 0xe95bdbe378eb7fa3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO_V1_15.ClassLibraryDeinitialize", class_library_deinitialize, 0x0, 0x0, false, 0xc7ca82bd25a4fa41)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_15.ClassLibraryBindClient", class_library_bind_client, 0x0, 0x0, false, 0x31516758166a318d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_15.ClassLibraryUnbindClient", class_library_unbind_client, 0x0, 0x0, false, 0x8bb767f9a3b7a66f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif