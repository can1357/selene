#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Duplicate@InputSink@InputTraceLogging$win32kbase.sys", 0xa9f8, 0x0, true, 0x6872c1b4a364589d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMapping@InputSink@InputTraceLogging$win32kbase.sys", 0x201bfc, 0x0, true, 0x30b1a6af636e2ba6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapPointsByVisualIdentifier@InputSink@InputTraceLogging$win32kbase.sys", 0x129874, 0x0, true, 0x2366632f541b5aed)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapVisualRelativePoint@InputSink@InputTraceLogging$win32kbase.sys", 0x129d58, 0x0, true, 0xe6a31c202e7b7fcf)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMapping@InputSink@InputTraceLogging$win32kbase.sys", 0x202064, 0x0, true, 0xe72a95491f3a2fe)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif