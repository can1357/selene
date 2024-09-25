#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Read@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0x13cd9d20babf551f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadOverflowUseData@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0x20d4046a9a0be78e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadProgramEntry@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0xa763994234c76220)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadProgramId@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0x6ca1bff3cacaca6e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadProgramUseData@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0x6f6a4e25d87d7092)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadSystemData@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0xdd93d52e06d98b87)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateRange@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0xf28a9de545c77e42)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateString@CIT_DATA_READER$win32kbase.sys", 0x0, 0x0, false, 0x3333c7ed15978d0d)
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