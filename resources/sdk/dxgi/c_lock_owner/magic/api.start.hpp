#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddRef@CLockOwner$dxgi.dll", 0x1fdb0, 0x0, true, 0x3cea7c6049fb3e4b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LOEnter@CLockOwner$dxgi.dll", 0x62ef0, 0x0, true, 0x106eb83855b6e3ce)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LOLeave@CLockOwner$dxgi.dll", 0x62f30, 0x0, true, 0x5c484b74cf86a03c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LOTryEnter@CLockOwner$dxgi.dll", 0x62f70, 0x0, true, 0xde5c4f9d5356134)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryInterface@CLockOwner$dxgi.dll", 0x63820, 0x0, true, 0xa06307ec6709b764)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@CLockOwner$dxgi.dll", 0x639c0, 0x0, true, 0x2a6ecbecdaa1b131)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif