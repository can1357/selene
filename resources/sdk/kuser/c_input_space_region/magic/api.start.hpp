#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInputSpaceRegion@@QEAA@XZ$win32kbase.sys", 0x566a0, 0x0, true, 0x5ffc6f02b483b20f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapToDisplayPath@CInputSpaceRegion$win32kbase.sys", 0x745d8, 0x0, true, 0x78f4d4020b236eac)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopulatePanelId@CInputSpaceRegion$win32kbase.sys", 0x74710, 0x0, true, 0x5eee9731c72fa23d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif