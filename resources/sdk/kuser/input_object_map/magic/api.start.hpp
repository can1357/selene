#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMapping@InputObjectMap$win32kbase.sys", 0x2018a4, 0x0, true, 0x669419c9d531cbc6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateBucket@InputObjectMap$win32kbase.sys", 0x201c64, 0x0, true, 0xdd55eb092ab0605c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeallocateBucket@InputObjectMap$win32kbase.sys", 0xd36d0, 0x0, true, 0x236e38dfb39e91b5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindEntry@InputObjectMap$win32kbase.sys", 0x201c90, 0x0, true, 0x135333c6ef4dbe0e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTransform@InputObjectMap$win32kbase.sys", 0x201e0c, 0x0, true, 0x8720bfe306e4d8f2)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnProcessTermination@InputObjectMap$win32kbase.sys", 0xdf54, 0x0, true, 0x72a884f2287d661a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMapping@InputObjectMap$win32kbase.sys", 0x201eb0, 0x0, true, 0x2d926c07cf634209)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_hashTable@InputObjectMap$win32kbase.sys", 0x25b3f8, 0x0, true, 0x3a2b7f3d9c07ad0f)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_hashTableLock@InputObjectMap$win32kbase.sys", 0x25b408, 0x0, true, 0x6d441b73e01efb5b)
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