#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddNewAdapterEntry@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x184178, 0x0, true, 0xde06094e1a3c8fb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddEntry@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x1841f4, 0x0, true, 0xeadeb8b013a13507)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x26428c, 0x0, true, 0x3cf4aef0f65c75d7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindEntry@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x264420, 0x0, true, 0x17f4af414c163793)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x2645b4, 0x0, true, 0xa18923ce0f927d3c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForceReducedHashSize@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x264764, 0x0, true, 0x41c4442bd60de0cd)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHashBitMask@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x68ec, 0x0, true, 0x3547ef50c0fad54e)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHashBitShift@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x3238, 0x0, true, 0x4898f8fb3bbd6d30)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAdapter@DXGADAPTERSOURCEHASH$dxgkrnl.sys", 0x265db4, 0x0, true, 0x8529571ee0a735bc)
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