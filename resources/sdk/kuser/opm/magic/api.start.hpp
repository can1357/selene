#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$INVALID_MONITOR_HANDLE@OPM$win32kbase.sys", 0x22b250, 0x0, true, 0xbf3899a026239c4a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NOT_ALERTABLE@OPM$win32kbase.sys", 0x22b258, 0x0, true, 0xbfd7e660b8816588)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OPMAllocateMemory@OPM$win32kbase.sys", 0x14f050, 0x0, true, 0xa757cad2b8a66ccc)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OPMFreeMemory@OPM$win32kbase.sys", 0xc0870, 0x0, true, 0xc9e7f3cc202d6339)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif