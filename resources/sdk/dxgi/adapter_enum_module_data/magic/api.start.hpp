#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeInit@AdapterEnumModuleData$dxgi.dll", 0x1ccec, 0x0, true, 0x574b121a5286479)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@AdapterEnumModuleData$dxgi.dll", 0x24b1c, 0x0, true, 0x9637110d4bb64d09)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif