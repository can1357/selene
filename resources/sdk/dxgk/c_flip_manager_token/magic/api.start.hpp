#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsLockValid@CFlipManagerToken$dxgkrnl.sys", 0x17ce0, 0x0, true, 0xa3c583795cb0e95b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@CFlipManagerToken$dxgkrnl.sys", 0x1aff0, 0x0, true, 0x8159194f6e4a492)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@CFlipManagerToken$dxgkrnl.sys", 0x61c10, 0x0, true, 0x6f73afb149fc9e94)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CFlipManagerToken$dxgkrnl.sys", 0x181a0, 0x0, true, 0x2c1e00e9bc21063)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Complete@CFlipManagerToken$dxgkrnl.sys", 0x61b70, 0x0, true, 0xc357c491fa37f823)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Discard@CFlipManagerToken$dxgkrnl.sys", 0x61bb0, 0x0, true, 0x51c80dc1eca6b30a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetModel@CFlipManagerToken$dxgkrnl.sys", 0x1ae20, 0x0, true, 0x6bcd71991a31e3a0)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CFlipManagerToken$dxgkrnl.sys", 0x1afc0, 0x0, true, 0x406ea2a58b62858)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Pending@CFlipManagerToken$dxgkrnl.sys", 0x61c70, 0x0, true, 0x574b442bb1798f14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif