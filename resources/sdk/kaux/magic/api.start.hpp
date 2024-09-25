#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t()>*), "$AuxKlibInitialize$hidclass.sys", 0x36524, 0x0, true, 0x48e35d47f37c07c0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*, uint32_t, void*)>*), "$AuxKlibQueryModuleInformation$hidclass.sys", 0x36594, 0x0, true, 0xcb0fc087a0029d04)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif