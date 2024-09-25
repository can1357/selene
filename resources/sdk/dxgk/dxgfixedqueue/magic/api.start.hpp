#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGFIXEDQUEUE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x3e147590330de26)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Add@DXGFIXEDQUEUE$dxgkrnl.sys", 0x491a4, 0x0, true, 0x3ca031d74af83b02)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@DXGFIXEDQUEUE$dxgkrnl.sys", 0x49420, 0x0, true, 0x61591d04e1467aac)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Remove@DXGFIXEDQUEUE$dxgkrnl.sys", 0x49494, 0x0, true, 0x2d74a0cb519fb40f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif