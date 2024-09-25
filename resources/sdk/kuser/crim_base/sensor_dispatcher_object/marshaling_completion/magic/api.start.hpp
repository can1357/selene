#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x7b44c, 0x0, true, 0xc883648fdd677fbf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase$win32kbase.sys", 0x56304, 0x0, true, 0x75187ced35310eac)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif