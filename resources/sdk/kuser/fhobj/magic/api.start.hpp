#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bAddPFELink@FHOBJ$win32kfull.sys", 0x705c4, 0x0, true, 0xe8a4807d49506bae)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bInsert@FHOBJ$win32kfull.sys", 0x38b70, 0x0, true, 0xfa4667eb2688ca37)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bScanLists@FHOBJ$win32kfull.sys", 0x7017c, 0x0, true, 0x64a31d4fd5be10b6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bValid@FHOBJ$win32kfull.sys", 0x39680, 0x0, true, 0xdfe37d3f2e952bb1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pbktSearch@FHOBJ$win32kfull.sys", 0x7088c, 0x0, true, 0x3bdce8bff3980530)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pwszName@FHOBJ$win32kfull.sys", 0x398b4, 0x0, true, 0xd41f9c80d47da506)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDelete@FHOBJ$win32kfull.sys", 0x38f54, 0x0, true, 0xc5c566f1f6d6b1)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDeletePFELink@FHOBJ$win32kfull.sys", 0x70394, 0x0, true, 0x39af193412c2032d)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vFree@FHOBJ$win32kfull.sys", 0x3734c, 0x0, true, 0x17e542f88163777b)
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