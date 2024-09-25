#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetLongPowerButtonHoldListener@DisplayDiagnostics$dxgkrnl.sys", 0x0, 0x0, false, 0x8b14b32e368f459a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LidStateReliabilityChangeCallback@DisplayDiagnostics$dxgkrnl.sys", 0x0, 0x0, false, 0x773a8e4a351c0339)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDisplayBlackboxRecorder@DisplayDiagnostics$dxgkrnl.sys", 0x4e0e0, 0x0, true, 0x7852ff818b9a7436)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DisplayDiagnostics$dxgkrnl.sys", 0x223c8, 0x0, true, 0xaba7276c5ebce7fb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif