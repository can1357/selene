#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdRemoveWbclData$ntoskrnl.exe", 0x0, 0x0, false, 0x595708c2fe7d3609)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdGetISRegistryKey$ntoskrnl.exe", 0x996670, 0x0, true, 0x6a7a8545f849c8f5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdRecordFirmwareBootStats$ntoskrnl.exe", 0x9948d0, 0x0, true, 0xd092da8c8e87f30b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdRegisterEtwProvider$ntoskrnl.exe", 0x397dd4, 0x0, true, 0x39bd717b4d3d4e20)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdRegisterSiData$ntoskrnl.exe", 0x996378, 0x0, true, 0xeaea0afdba536d86)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BapdWriteEtwEvents$ntoskrnl.exe", 0x3979e8, 0x0, true, 0x37641ba81ffdf891)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif