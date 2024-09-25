#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Detach@CPROCESSATTACHHELPER$dxgkrnl.sys", 0x0, 0x0, false, 0xed7513241572cc60)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Attach@CPROCESSATTACHHELPER$dxgkrnl.sys", 0xb464, 0x0, true, 0x7c7d7d906eae76c1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif