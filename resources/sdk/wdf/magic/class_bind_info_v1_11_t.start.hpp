#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_11.Size", size, 0x0, 0x0, false, 0xf1138809ba855863)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO_V1_11.ClassName", class_name, 0x0, 0x0, false, 0x7f5babcac74b5c5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_v1_11_t), "_WDF_CLASS_BIND_INFO_V1_11.Version", version, 0x0, 0x0, false, 0x93e579384fafd910)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO_V1_11.FunctionTable", function_table, 0x0, 0x0, false, 0x6822507ae0ef453)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO_V1_11.FunctionTableCount", function_table_count, 0x0, 0x0, false, 0x78af50890aef89b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_11.ClassBindInfo", class_bind_info, 0x0, 0x0, false, 0x7b30da469fce383c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO_V1_11.ClientBindClass", client_bind_class, 0x0, 0x0, false, 0xd25e955c5340a592)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO_V1_11.ClientUnbindClass", client_unbind_class, 0x0, 0x0, false, 0x12de6bf79cd23a86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO_V1_11.ClassModule", class_module, 0x0, 0x0, false, 0xfb463909965e0440)
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