#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_SINGLE_MODULE_INFORMATION.TargetModuleAddress", target_module_address, 0x0, 0x40, true, 0xf141d5d6f03b129c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::process_module_information_ex_t), "_SYSTEM_SINGLE_MODULE_INFORMATION.ExInfo", ex_info, 0x40, 0x0, true, 0x50b7d4ea49f440a5)
#else
#define _m00
#define _m01
#endif