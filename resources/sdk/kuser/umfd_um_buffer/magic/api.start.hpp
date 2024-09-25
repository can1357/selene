#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitBuffer@UmfdUMBuffer$win32kfull.sys", 0x0, 0x0, false, 0x83af3d02040fb2c3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitReservedBuffer@UmfdUMBuffer$win32kfull.sys", 0x0, 0x0, false, 0x5e360bd69c9df98e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AlignSizeTo@UmfdUMBuffer$win32kfull.sys", 0xdfdd0, 0x0, true, 0xa9ff502713385112)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocTemporaryBuffer@UmfdUMBuffer$win32kfull.sys", 0x2dede4, 0x0, true, 0x86a3dd916ad4177a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@UmfdUMBuffer$win32kfull.sys", 0x123d00, 0x0, true, 0xea8ed2ee260f0dc9)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@UmfdUMBuffer$win32kfull.sys", 0x10bc60, 0x0, true, 0x348aeb51c90fd702)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif