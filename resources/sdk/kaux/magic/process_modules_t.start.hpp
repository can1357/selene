#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_PROCESS_MODULES.NumberOfModules", number_of_modules, 0x0, 0x20, true, 0xb8ec1c0146181706)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct kaux::process_module_information_t, 1>), "_AUX_PROCESS_MODULES.Modules", modules, 0x40, 0x40, true, 0xbb1e02a639559d64)
#else
#define _m00
#define _m01
#endif