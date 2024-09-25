#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddDisplaySource@SESSION_ADAPTER$dxgkrnl.sys", 0xd65d8, 0x0, true, 0x5b64413a89d9092f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@SESSION_ADAPTER$dxgkrnl.sys", 0xd6938, 0x0, true, 0xd06c5262dbeaeda6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateCddDevice@SESSION_ADAPTER$dxgkrnl.sys", 0x14aee4, 0x0, true, 0xa1aff222bc4a84f8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyCddDeviceAndContext@SESSION_ADAPTER$dxgkrnl.sys", 0xd69ac, 0x0, true, 0x3cfe2d1380a47e0b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SESSION_ADAPTER@@QEAA@XZ$dxgkrnl.sys", 0xd68d0, 0x0, true, 0x2e436113142b5887)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCddDeviceAndContext@SESSION_ADAPTER$dxgkrnl.sys", 0x12cd84, 0x0, true, 0x41dbb323e23ff319)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDisplaySource@SESSION_ADAPTER$dxgkrnl.sys", 0x123518, 0x0, true, 0x1862d10ccd34f37b)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@SESSION_ADAPTER$dxgkrnl.sys", 0xd6878, 0x0, true, 0xcbc212061d4138ff)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveDisplaySource@SESSION_ADAPTER$dxgkrnl.sys", 0xd67f0, 0x0, true, 0x6dbd4bb276e16d07)
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