#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignByHandle@DXGADAPTER_REFERENCE$dxgkrnl.sys", 0x206820, 0x0, true, 0x526a2fdd058dcb3c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AssignByLuid@DXGADAPTER_REFERENCE$dxgkrnl.sys", 0x328c, 0x0, true, 0xd463be6b49c0496b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGADAPTER_REFERENCE@@QEAA@XZ$dxgkrnl.sys", 0x1ad40, 0x0, true, 0x12c430dc5d897356)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGADAPTER_REFERENCE@@QEAA@XZ$dxgkrnl.sys", 0x33ac0, 0x0, true, 0x82b6f88b7032b294)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Assign@DXGADAPTER_REFERENCE$dxgkrnl.sys", 0x88f0, 0x0, true, 0xc6ed16d3dc8bd2a6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif