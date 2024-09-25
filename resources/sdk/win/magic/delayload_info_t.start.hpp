#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELAYLOAD_INFO.Size", size, 0x0, 0x20, true, 0xc3a25897fc2a81bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct image::delayload_descriptor_t*), "_DELAYLOAD_INFO.DelayloadDescriptor", delayload_descriptor, 0x40, 0x40, true, 0x73ed238c87e0e6bb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::thunk_data64_t*), "_DELAYLOAD_INFO.ThunkAddress", thunk_address, 0x80, 0x40, true, 0xc85e415e28530111)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_DELAYLOAD_INFO.TargetDllName", target_dll_name, 0xc0, 0x40, true, 0x7cac75f31b7a59f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::delayload_proc_descriptor_t), "_DELAYLOAD_INFO.TargetApiDescriptor", target_api_descriptor, 0x100, 0x80, true, 0xc473c03d1af91326)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DELAYLOAD_INFO.TargetModuleBase", target_module_base, 0x180, 0x40, true, 0xa51caabbcd8c72fa)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DELAYLOAD_INFO.LastError", last_error, 0x200, 0x20, true, 0x4683742dfd5ffdd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif