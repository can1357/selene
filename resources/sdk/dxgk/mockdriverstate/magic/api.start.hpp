#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MOCKDRIVERSTATE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x403e0d74ae015722)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@MOCKDRIVERSTATE$dxgkrnl.sys", 0x0, 0x0, false, 0xc9eac5a49cbad2f5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateFbrHelper@MOCKDRIVERSTATE$dxgkrnl.sys", 0x0, 0x0, false, 0xfdd5ba0688ab8847)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z$dxgkrnl.sys", 0x21f94, 0x0, true, 0x689450fef0cb9ea4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetMockDriverState@MOCKDRIVERSTATE$dxgkrnl.sys", 0x4ba4c, 0x0, true, 0xaa9088a452d612a4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateMockDriverState@MOCKDRIVERSTATE$dxgkrnl.sys", 0x6d1c, 0x0, true, 0x2213f86b39dd9e38)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidatePlaneHelper@MOCKDRIVERSTATE$dxgkrnl.sys", 0x4bac8, 0x0, true, 0xa9dbe269e0db5a4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif