#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0AUTO_TGO@@IEAA@XZ$win32kbase.sys", 0x45804, 0x0, true, 0xef1b28126013537d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1AUTO_TGO@@MEAA@XZ$win32kbase.sys", 0x45848, 0x0, true, 0x9ffd199ec244cf74)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_DisposeThis@AUTO_TGO$win32kbase.sys", 0x155090, 0x0, true, 0x6212d7b4c1406648)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif