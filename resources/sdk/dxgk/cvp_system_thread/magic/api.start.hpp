#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CVP_SYSTEM_THREAD@@MEAA@XZ$dxgkrnl.sys", 0x25eaa0, 0x0, true, 0x44e6225dbcf3f1ff)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Start@CVP_SYSTEM_THREAD$dxgkrnl.sys", 0x25f308, 0x0, true, 0xc15cd2e94a356b79)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ThreadRoutine@CVP_SYSTEM_THREAD$dxgkrnl.sys", 0x261000, 0x0, true, 0xb2b9474b09f167af)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif