#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_BIND_INFO.Size", size, 0x0, 0x20, true, 0xb2e4eab7254c6312)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_WDF_BIND_INFO.Component", component, 0x40, 0x40, true, 0xfb4816921b73f3a4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::version_t), "_WDF_BIND_INFO.Version", version, 0x80, 0x60, true, 0x36bc9632efbe82d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_BIND_INFO.FuncCount", func_count, 0xe0, 0x20, true, 0xbf4df50fbb07dda0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_WDF_BIND_INFO.FuncTable", func_table, 0x100, 0x40, true, 0xb8d404bc152f4abc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::library_module_t*), "_WDF_BIND_INFO.Module", module, 0x140, 0x40, true, 0x9c9aa319b1d9dfcc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif