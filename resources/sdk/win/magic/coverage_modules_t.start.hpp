#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_MODULES.ListAndReset", list_and_reset, 0x0, 0x20, true, 0xb58a5347e2779b7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_MODULES.NumberOfModules", number_of_modules, 0x20, 0x20, true, 0x5c7ea290b4c91b5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coverage_module_request_t), "_COVERAGE_MODULES.ModuleRequestInfo", module_request_info, 0x40, 0xc0, true, 0x1297313603c192e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::coverage_module_info_t, 1>), "_COVERAGE_MODULES.Modules", modules, 0x100, 0x0, true, 0xa9e7de919010528d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif