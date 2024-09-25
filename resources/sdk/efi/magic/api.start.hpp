#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiBootVariablesGuid$ntoskrnl.exe", 0x3a920, 0x0, true, 0xb61d73f0a5fb8062)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiDriverVariablesGuid$ntoskrnl.exe", 0x3a910, 0x0, true, 0xb5eb2714f093f836)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiCertRsa2048Guid$ci.dll", 0x312d8, 0x0, true, 0xcabfb3f80148bb79)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiCertSha256Guid$ci.dll", 0x31298, 0x0, true, 0x52ac329a444661f9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiCertSha384Guid$ci.dll", 0x312f8, 0x0, true, 0x37bb23b7bf0eaa12)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiCertSha512Guid$ci.dll", 0x312e8, 0x0, true, 0x3bec56ec38f6f2c6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiCertX509Guid$ci.dll", 0x312c8, 0x0, true, 0x3fbbf7bed2afd624)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiGlobalVariable$ci.dll", 0x312b8, 0x0, true, 0x474bba259f5dccd6)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EfiImageSecurityDatabaseVariable$ci.dll", 0x312a8, 0x0, true, 0x6939ab2b0ba07eb1)
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