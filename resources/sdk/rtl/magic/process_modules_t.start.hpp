#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_MODULES.NumberOfModules", number_of_modules, 0x0, 0x20, true, 0x88456b2f4fdb62d3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::process_module_information_t, 1>), "_RTL_PROCESS_MODULES.Modules", modules, 0x40, 0x40, true, 0xf26a61a0369f486d)
#else
#define _m00
#define _m01
#endif