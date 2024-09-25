#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CDeviceIdentity$win32kbase.sys", 0x7917c, 0x0, true, 0x1845163963c89620)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IssueIdentityOnDeviceArrival@CDeviceIdentity$win32kbase.sys", 0xbc914, 0x0, true, 0xb1056476a1139748)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendNewIdentityCreated@CDeviceIdentity$win32kbase.sys", 0x7ccf0, 0x0, true, 0xfe02de0b9b4dacd0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif