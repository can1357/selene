#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$attach@UniqueHMODULE$dxgi.dll", 0x8374, 0x0, true, 0xb86ad0f4b1244a2d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UniqueHMODULE@@QEAA@XZ$dxgi.dll", 0x1f67c, 0x0, true, 0xc04ee18464dd9e41)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif