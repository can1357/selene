#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_RETPOLINE_BINARY_INFO.RetpolineStubsStartRva", retpoline_stubs_start_rva, 0x0, 0x20, true, 0x24e949c5230d773)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_BINARY_INFO.CfgDispatchFunctionPtrRva", cfg_dispatch_function_ptr_rva, 0x20, 0x20, true, 0x7854ef3c12aa4797)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_BINARY_INFO.IATRva", iat_rva, 0x40, 0x20, true, 0x3b22ebfb98664d1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_RTL_RETPOLINE_BINARY_INFO.ImportRvas", import_rvas, 0x80, 0x40, true, 0xd17188c1bb4e71df)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_RTL_RETPOLINE_BINARY_INFO.IAT", iat, 0xc0, 0x40, true, 0x2335d6468697aa38)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RETPOLINE_BINARY_INFO.ImageBase", image_base, 0x100, 0x40, true, 0xd0593a1ad75c35bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_RTL_RETPOLINE_BINARY_INFO.CheckFunction", check_function, 0x140, 0x40, true, 0x4db16227d5a23c7f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RETPOLINE_BINARY_INFO.IATSize", iat_size, 0x0, 0x0, false, 0xeb8fc9dda16380d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif