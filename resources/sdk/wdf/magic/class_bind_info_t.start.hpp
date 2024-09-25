#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO.Size", size, 0x0, 0x20, true, 0x4b184c0a3ed184fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_CLASS_BIND_INFO.ClassName", class_name, 0x40, 0x40, true, 0x2cffec91fd9ce997)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::class_version_t), "_WDF_CLASS_BIND_INFO.Version", version, 0x80, 0x60, true, 0x2af9b32d492f4e58)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_CLASS_BIND_INFO.FunctionTable", function_table, 0x100, 0x40, true, 0x717350b027eb5ee3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_BIND_INFO.FunctionTableCount", function_table_count, 0x140, 0x20, true, 0x98733bdfc14708f1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO.ClassBindInfo", class_bind_info, 0x180, 0x40, true, 0x9a2b33c2f6cc6178)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_bind_class_t ), "_WDF_CLASS_BIND_INFO.ClientBindClass", client_bind_class, 0x1c0, 0x40, true, 0x2980fda38755272f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_client_unbind_class_t ), "_WDF_CLASS_BIND_INFO.ClientUnbindClass", client_unbind_class, 0x200, 0x40, true, 0xe590bd0a0ab63986)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_CLASS_BIND_INFO.ClassModule", class_module, 0x240, 0x40, true, 0xd2198de720d9b65e)
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