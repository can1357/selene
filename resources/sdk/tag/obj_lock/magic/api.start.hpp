#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockExclusive@tagObjLock$win32kbase.sys", 0x84f40, 0x0, true, 0x8dc4260b89a19cd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockInitialize@tagObjLock$win32kbase.sys", 0x716d0, 0x0, true, 0x21ce7bf41dc482a5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockInitializeProcessCreator@tagObjLock$win32kbase.sys", 0x716d0, 0x0, true, 0x2dad10f29d79a78c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockInitializeThreadCreator@tagObjLock$win32kbase.sys", 0x716d0, 0x0, true, 0x3c3cc8f2deb908a1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockShared@tagObjLock$win32kbase.sys", 0x12a430, 0x0, true, 0xa261e387c75fc5a9)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockUnInitialize@tagObjLock$win32kbase.sys", 0x15eb0, 0x0, true, 0x809849e8fad697a8)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockUnInitializeProcessCreator@tagObjLock$win32kbase.sys", 0x15eb0, 0x0, true, 0xe8d82abcbbeab9fa)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockUnInitializeThreadCreator@tagObjLock$win32kbase.sys", 0x15eb0, 0x0, true, 0xc168c88939b7fc86)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockExclusive@tagObjLock$win32kbase.sys", 0x5cd00, 0x0, true, 0x515c5374ce0981c1)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockShared@tagObjLock$win32kbase.sys", 0x12a470, 0x0, true, 0xe7b906ea1e4be27e)
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
#define _m9(...) __VA_ARGS__
#endif