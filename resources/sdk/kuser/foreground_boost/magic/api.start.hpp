#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsProcessPriorityByClassBackground@ForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0xfc9ecec1bfa45446)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetForegroundPriority@ForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0xf9e9919e93ea96b0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateProcessPriorityForSpinning@ForegroundBoost$win32kbase.sys", 0x0, 0x0, false, 0xf0ce5a546a3aeff1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif