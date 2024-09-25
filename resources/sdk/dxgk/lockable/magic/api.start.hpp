#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1Lockable@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc85023d51151c8b9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0Lockable@@QEAA@XZ$dxgkrnl.sys", 0x17a778, 0x0, true, 0x1096758093b978)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1Lockable@@UEAA@XZ$dxgkrnl.sys", 0x2e37ac, 0x0, true, 0x1fefa23832a455c8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsConstructed@Lockable$dxgkrnl.sys", 0x194e0, 0x0, true, 0xd74042661c84173e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetConstructionStatus@Lockable$dxgkrnl.sys", 0x1af00, 0x0, true, 0xfc2bf69d5116f5de)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif