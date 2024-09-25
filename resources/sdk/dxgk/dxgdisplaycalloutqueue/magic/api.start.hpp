#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE$dxgkrnl.sys", 0x26402c, 0x0, true, 0x7c7db80a70eab47c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE$dxgkrnl.sys", 0x266148, 0x0, true, 0x78ddfc135f0e90f7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE$dxgkrnl.sys", 0x266830, 0x0, true, 0x42a3ad897ebd3284)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubmitBatch@DXGDISPLAYCALLOUTQUEUE$dxgkrnl.sys", 0x2668cc, 0x0, true, 0xaae06b3b56a1ef76)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE$dxgkrnl.sys", 0x2669e8, 0x0, true, 0x537a706db3e4b453)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif