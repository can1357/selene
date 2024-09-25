#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO_V1_9.Size", size, 0x0, 0x0, false, 0x878e23000c528e3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_9_t), "_WDF_CLASS_LIBRARY_INFO_V1_9.Version", version, 0x0, 0x0, false, 0x14e1fa58b2c7ee36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO_V1_9.ClassLibraryInitialize", class_library_initialize, 0x0, 0x0, false, 0x663dc28ce4046dc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO_V1_9.ClassLibraryDeinitialize", class_library_deinitialize, 0x0, 0x0, false, 0x593545f4e4597138)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_9.ClassLibraryBindClient", class_library_bind_client, 0x0, 0x0, false, 0xa8d7179ce415c0a0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_9.ClassLibraryUnbindClient", class_library_unbind_client, 0x0, 0x0, false, 0x736a329d044523b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif