#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockForDPIScaledClipping@DLODCOBJ$win32kfull.sys", 0x44728, 0x0, true, 0xf40a11fb74471cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@DLODCOBJ$win32kfull.sys", 0x418fc, 0x0, true, 0x30f702ee86d91684)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif