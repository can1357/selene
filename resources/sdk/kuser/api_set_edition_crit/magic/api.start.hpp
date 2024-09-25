#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ApiSetEditionCrit@@QEAA@H@Z$win32kbase.sys", 0x0, 0x0, false, 0x44fa15b690d86bb2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ApiSetEditionCrit@@QEAA@HH@Z$win32kbase.sys", 0x5d848, 0x0, true, 0x8cb6309d58da4170)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ApiSetEditionCrit@@QEAA@XZ$win32kbase.sys", 0x5d9ec, 0x0, true, 0x86297a99e177ff7e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif