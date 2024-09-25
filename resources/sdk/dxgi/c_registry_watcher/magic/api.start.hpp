#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@CRegistryWatcher$dxgi.dll", 0x9174, 0x0, true, 0xd7e39b2bf9eb8206)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CRegistryWatcher@@QEAA@XZ$dxgi.dll", 0x7c0c8, 0x0, true, 0x583cac9cf2bf722d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetDWORDWatch@CRegistryWatcher$dxgi.dll", 0x910c, 0x0, true, 0xff00670a3ca46263)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif