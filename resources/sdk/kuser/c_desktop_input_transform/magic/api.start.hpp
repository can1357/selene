#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInstance@CDesktopInputTransform$win32kbase.sys", 0xc0950, 0x0, true, 0x30904d9e0f0e2540)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTransform@CDesktopInputTransform$win32kbase.sys", 0x1c22e0, 0x0, true, 0x8138e6c49fcfa2ed)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsDesktopVisualInputSink@CDesktopInputTransform$win32kbase.sys", 0x1c2308, 0x0, true, 0x3be6777f1923cc04)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform$win32kbase.sys", 0x1c2390, 0x0, true, 0x77db834ee83b6bf6)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetDesktopVisualInputSink@CDesktopInputTransform$win32kbase.sys", 0x1c23f4, 0x0, true, 0x48cd9fa72a8657a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TransformMouseCoordinates@CDesktopInputTransform$win32kbase.sys", 0x1c2500, 0x0, true, 0x647bd3637fa2dc0f)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TransformPointerCoordinates@CDesktopInputTransform$win32kbase.sys", 0x1c25e4, 0x0, true, 0xb5dd113285f5925b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif