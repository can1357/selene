#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CloseDispatcherHandles@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x56210, 0x0, true, 0xc1873a4ddac7ad8e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateDispatcherHandles@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x7b2b8, 0x0, true, 0x361bb63b6ac9d87b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWorkAndWait@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x57c4c, 0x0, true, 0x87ab5d91b5cf6b09)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x64cd8, 0x0, true, 0x12af47204695e841)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif