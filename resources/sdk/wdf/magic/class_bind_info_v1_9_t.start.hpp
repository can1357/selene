#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_9.Size", size, 0x0, 0x0, false, 0x9659394e560594a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO_V1_9.ClassName", class_name, 0x0, 0x0, false, 0x801cb6f99a20768)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_9_t), "_WDF_CLASS_BIND_INFO_V1_9.Version", version, 0x0, 0x0, false, 0x1b0a6b779a6a847b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO_V1_9.FunctionTable", function_table, 0x0, 0x0, false, 0xbea70afb0486019e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_9.FunctionTableCount", function_table_count, 0x0, 0x0, false, 0x4b483763ac973a51)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_9.ClassBindInfo", class_bind_info, 0x0, 0x0, false, 0x6ae7b140dca78f30)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO_V1_9.ClientBindClass", client_bind_class, 0x0, 0x0, false, 0xb72314a2cf6d24d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO_V1_9.ClientUnbindClass", client_unbind_class, 0x0, 0x0, false, 0x635764bb41fda06c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_9.ClassModule", class_module, 0x0, 0x0, false, 0xdc13b26f9530170e)
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