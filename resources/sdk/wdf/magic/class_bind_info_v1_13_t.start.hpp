#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_13.Size", size, 0x0, 0x0, false, 0xd12eda0064ce4275)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO_V1_13.ClassName", class_name, 0x0, 0x0, false, 0xb49bf183ab9b7e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_13_t), "_WDF_CLASS_BIND_INFO_V1_13.Version", version, 0x0, 0x0, false, 0x64509e39a928b3fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO_V1_13.FunctionTable", function_table, 0x0, 0x0, false, 0x12e06a57a53a661e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_13.FunctionTableCount", function_table_count, 0x0, 0x0, false, 0x4f4b7ff3dcaced3a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_13.ClassBindInfo", class_bind_info, 0x0, 0x0, false, 0x2487a60f2e154045)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO_V1_13.ClientBindClass", client_bind_class, 0x0, 0x0, false, 0xf397c37a93d14e4e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO_V1_13.ClientUnbindClass", client_unbind_class, 0x0, 0x0, false, 0x98517924f74f73a2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_13.ClassModule", class_module, 0x0, 0x0, false, 0x68b6c691a5b8a34f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif