#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_17.Size", size, 0x0, 0x0, false, 0xfe359b127f2e4cb2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO_V1_17.ClassName", class_name, 0x0, 0x0, false, 0xf4c290b65c5d053f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_17_t), "_WDF_CLASS_BIND_INFO_V1_17.Version", version, 0x0, 0x0, false, 0x6cce6b4dc66f93a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO_V1_17.FunctionTable", function_table, 0x0, 0x0, false, 0x1d7024b697cc7158)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_17.FunctionTableCount", function_table_count, 0x0, 0x0, false, 0x47df1aaba1bd75dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_17.ClassBindInfo", class_bind_info, 0x0, 0x0, false, 0xaac9174bcfa080d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO_V1_17.ClientBindClass", client_bind_class, 0x0, 0x0, false, 0x7d699b3e60527258)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO_V1_17.ClientUnbindClass", client_unbind_class, 0x0, 0x0, false, 0xd98680078507cd54)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_17.ClassModule", class_module, 0x0, 0x0, false, 0x53b6fbd095690c30)
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