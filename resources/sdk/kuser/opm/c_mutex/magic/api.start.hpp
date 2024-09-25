#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@CMutex@OPM$win32kbase.sys", 0x96b50, 0x0, true, 0xec1cc0f20b778197)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@CMutex@OPM$win32kbase.sys", 0x14bbf0, 0x0, true, 0x1c4a4b2ccb473cd9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif