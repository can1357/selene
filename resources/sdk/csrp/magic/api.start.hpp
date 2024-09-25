#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrpLocalSetupForSecureProcess$ntdll.dll", 0x0, 0x0, false, 0xc553e91bf73f6795)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrpClientConnectToServer$ntdll.dll", 0x70b98, 0x0, true, 0x693779ce6d753098)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrpConnectToServer$ntdll.dll", 0x707d4, 0x0, true, 0x617182a05eb6f06f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CsrpHeapCommitRoutine$ntdll.dll", 0x836f0, 0x0, true, 0x4cee2bdea363cff1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif