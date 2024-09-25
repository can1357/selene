#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterStack@UserAtomicCheck$win32kfull.sys", 0x0, 0x0, false, 0x7b0ecdee90b8fcad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnregisterStack@UserAtomicCheck$win32kfull.sys", 0x0, 0x0, false, 0x851a14a176925364)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UserAtomicCheck@@QEAA@XZ$win32kfull.sys", 0x7d864, 0x0, true, 0xfae5220d31b57821)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UserAtomicCheck@@QEAA@XZ$win32kfull.sys", 0x7d810, 0x0, true, 0x7349f8fac58e3ecd)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Detach@UserAtomicCheck$win32kfull.sys", 0x4e214, 0x0, true, 0x7abcb396b08c7196)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif