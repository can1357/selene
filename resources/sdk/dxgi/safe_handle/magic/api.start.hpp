#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@SafeHANDLE$dxgi.dll", 0x1f64c, 0x0, true, 0x1174c82a98f8422b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SafeHANDLE@@QEAA@XZ$dxgi.dll", 0x1f2a0, 0x0, true, 0x820a4f6559ab1956)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SafeHANDLE@@QEAA@XZ$dxgi.dll", 0x48820, 0x0, true, 0xc746e3fe9456a9b3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif