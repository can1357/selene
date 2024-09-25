#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AppendSubKeys@DXG_REGISTRY_KEY_LIST$dxgkrnl.sys", 0x25c5e0, 0x0, true, 0xc4c887ae8c2b3741)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ$dxgkrnl.sys", 0x25c59c, 0x0, true, 0x16e13a35a99e2808)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertHead@DXG_REGISTRY_KEY_LIST$dxgkrnl.sys", 0x25e0a0, 0x0, true, 0x642f3c8dab510cb0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InsertTail@DXG_REGISTRY_KEY_LIST$dxgkrnl.sys", 0x25e138, 0x0, true, 0x152ef57f1143c8db)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadNextPath@DXG_REGISTRY_KEY_LIST$dxgkrnl.sys", 0x25e8b4, 0x0, true, 0xc96fcae15cda264d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif