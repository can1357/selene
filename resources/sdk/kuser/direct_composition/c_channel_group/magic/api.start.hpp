#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CChannelGroup@DirectComposition$win32kbase.sys", 0x7dbcc, 0x0, true, 0x957a540b00845602)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertChannel@CChannelGroup@DirectComposition$win32kbase.sys", 0xa7d3c, 0x0, true, 0xa5dddb834b3b73bc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnConnectionDisconnected@CChannelGroup@DirectComposition$win32kbase.sys", 0x815f4, 0x0, true, 0x193b44ece8701161)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnConnectionReconnected@CChannelGroup@DirectComposition$win32kbase.sys", 0x81554, 0x0, true, 0x5a4cd24f47a37d75)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif