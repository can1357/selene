#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddInputToList@BufferedMouseInputList@CMouseProcessor$win32kbase.sys", 0x1c61f8, 0x0, true, 0x52c4919eb2ba71b2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DropAllMouseInput@BufferedMouseInputList@CMouseProcessor$win32kbase.sys", 0xbe69c, 0x0, true, 0xbf0825bb74df0da6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor$win32kbase.sys", 0x1c91fc, 0x0, true, 0x75c07d6660361a33)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif