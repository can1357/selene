#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z$win32kbase.sys", 0x0, 0x0, false, 0xd72d73d1c5229f86)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VPTPTouchpad@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x8381332833b2a7d0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsActive@VPTPTouchpad$win32kbase.sys", 0x0, 0x0, false, 0x4cb53ea37c1f09db)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif