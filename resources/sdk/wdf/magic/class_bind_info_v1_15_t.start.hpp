#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_15.Size", size, 0x0, 0x0, false, 0x70b66f9169d139ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO_V1_15.ClassName", class_name, 0x0, 0x0, false, 0xd23cf22e7b2fe982)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_15_t), "_WDF_CLASS_BIND_INFO_V1_15.Version", version, 0x0, 0x0, false, 0x9a92ddad903313d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO_V1_15.FunctionTable", function_table, 0x0, 0x0, false, 0xcc0d8fd7e8209060)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_15.FunctionTableCount", function_table_count, 0x0, 0x0, false, 0x62128cfdfd4b82ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_15.ClassBindInfo", class_bind_info, 0x0, 0x0, false, 0x1e37d89ec6fb17e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO_V1_15.ClientBindClass", client_bind_class, 0x0, 0x0, false, 0x45455f774fafef19)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO_V1_15.ClientUnbindClass", client_unbind_class, 0x0, 0x0, false, 0x8cbc028afaf1889c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_15.ClassModule", class_module, 0x0, 0x0, false, 0xc89f5a799d414333)
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