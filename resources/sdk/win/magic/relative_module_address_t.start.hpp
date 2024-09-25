#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RELATIVE_MODULE_ADDRESS.address", address, 0x0, 0x20, true, 0x1aadc2ebd3880557)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RELATIVE_MODULE_ADDRESS.moduleName", module_name, 0x40, 0x0, true, 0x8a5a5eb6ca894ab1)
#else
#define _m00
#define _m01
#endif