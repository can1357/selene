#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z$ndis.sys", 0xf8958, 0x0, true, 0x73da89d3c47a7912)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenPropertyKey@NetSetupPropertyBag$ndis.sys", 0x101ac4, 0x0, true, 0x8dc1d8758c1b8da8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadBoolean@NetSetupPropertyBag$ndis.sys", 0x101d24, 0x0, true, 0xa5098e7fe884153b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadGuid@NetSetupPropertyBag$ndis.sys", 0x100f44, 0x0, true, 0x19975c56de2d1c4a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadString@NetSetupPropertyBag$ndis.sys", 0x101008, 0x0, true, 0xb83991b1a8f3e781)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadStringArray@NetSetupPropertyBag$ndis.sys", 0x12272c, 0x0, true, 0xceaa4c565fa79f98)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadUint32@NetSetupPropertyBag$ndis.sys", 0x101b3c, 0x0, true, 0x36c8a43fb282c553)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadUint64@NetSetupPropertyBag$ndis.sys", 0x100730, 0x0, true, 0xc48cf732573ef4d0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif