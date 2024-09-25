#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 261>), "DLL_INSTANTIATION_PROPERTIES._pzDllPath", pz_dll_path, 0x0, 0x50, true, 0xf6379c2b62c7618f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLL_INSTANTIATION_PROPERTIES._dwThreadingModel", dw_threading_model, 0x1060, 0x20, true, 0xab7e567a4429fad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLL_INSTANTIATION_PROPERTIES._dwFlags", dw_flags, 0x1080, 0x20, true, 0x4504b441cccfce45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLL_INSTANTIATION_PROPERTIES._dwHash", dw_hash, 0x10a0, 0x20, true, 0xec81f5dc19765c28)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLL_INSTANTIATION_PROPERTIES._dwContext", dw_context, 0x10c0, 0x20, true, 0xf548e2de5d511986)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_dll_class_t*), "DLL_INSTANTIATION_PROPERTIES._dllClass", dll_class, 0x1100, 0x40, true, 0x3cfe130583597bca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif