#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@COREACCESS$dxgkrnl.sys", 0x8c00, 0x0, true, 0xeed9ad70c5736905)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@COREACCESS$dxgkrnl.sys", 0x43d8, 0x0, true, 0xd6aba13e131f62f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z$dxgkrnl.sys", 0x8654, 0x0, true, 0xa40e7a55998b68fc)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1COREACCESS@@QEAA@XZ$dxgkrnl.sys", 0x867c, 0x0, true, 0xcdd24e571e092540)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@COREACCESS$dxgkrnl.sys", 0x4b2c, 0x0, true, 0xd53b149a450f5ccd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif