#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_LIBRARY_INFO_V1_11.Size", size, 0x0, 0x0, false, 0x9da800e3bc359ade)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_11_t), "_WDF_CLASS_LIBRARY_INFO_V1_11.Version", version, 0x0, 0x0, false, 0x2f131275a678b4da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_WDF_CLASS_LIBRARY_INFO_V1_11.ClassLibraryInitialize", class_library_initialize, 0x0, 0x0, false, 0xc4ef60b4024cfff4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_WDF_CLASS_LIBRARY_INFO_V1_11.ClassLibraryDeinitialize", class_library_deinitialize, 0x0, 0x0, false, 0x61641f800bb785ab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_bind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_11.ClassLibraryBindClient", class_library_bind_client, 0x0, 0x0, false, 0x4815dc32d816d280)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_class_library_unbind_client_t ), "_WDF_CLASS_LIBRARY_INFO_V1_11.ClassLibraryUnbindClient", class_library_unbind_client, 0x0, 0x0, false, 0x574e1caa638b72e2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif