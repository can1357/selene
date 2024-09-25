#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xf7b4658ba5e3c4d6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc9e460809a94696d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif