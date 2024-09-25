#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0KLoader@@QEAA@XZ$ndis.sys", 0x0, 0x0, false, 0x32fde5e420c71783)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DereferenceKModule@KLoader$ndis.sys", 0x0, 0x0, false, 0x849f8b6a471f9ca0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DereferenceModule@KLoader$ndis.sys", 0x0, 0x0, false, 0x249a8ac5aad1fa2b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindModuleByGuidLocked@KLoader$ndis.sys", 0x0, 0x0, false, 0x58bb88f32c47f828)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceKModule@KLoader$ndis.sys", 0x0, 0x0, false, 0xfff74dbf382be0e2)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceModule@KLoader$ndis.sys", 0x0, 0x0, false, 0xaf093989fe2ffaad)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterModule@KLoader$ndis.sys", 0x0, 0x0, false, 0x325f3b2411504d3c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif