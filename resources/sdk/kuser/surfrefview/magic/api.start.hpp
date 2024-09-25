#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SURFREFVIEW@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x5f43cab8b860bf82)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bMap@SURFREFVIEW$win32kbase.sys", 0x3f5f0, 0x0, true, 0x857cc29e32af7755)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bUnMap@SURFREFVIEW$win32kbase.sys", 0x8e1e0, 0x0, true, 0xde3b6a4bdb79dc47)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bUnMapImmediate@SURFREFVIEW$win32kbase.sys", 0x8e0b0, 0x0, true, 0x58be63c65f86cf3f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif