#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1HMGRTABLE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xd8452ea5a129d1ec)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetUsedEntryCount@HMGRTABLE$dxgkrnl.sys", 0x4ac74, 0x0, true, 0x34ce8eada9153853)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocHandle@HMGRTABLE$dxgkrnl.sys", 0x101d30, 0x0, true, 0x8a251ffe9f1e1c22)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BuildEntryHandle@HMGRTABLE$dxgkrnl.sys", 0x14c310, 0x0, true, 0xf7f559c0e84ea164)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExpandTable@HMGRTABLE$dxgkrnl.sys", 0x1454fc, 0x0, true, 0xb525bdffc50b9560)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeHandle@HMGRTABLE$dxgkrnl.sys", 0x10ade0, 0x0, true, 0x4ba0530610ee4562)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryObject@HMGRTABLE$dxgkrnl.sys", 0x14edfc, 0x0, true, 0x5cd7625bf3085908)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEntryType@HMGRTABLE$dxgkrnl.sys", 0x121218, 0x0, true, 0xf627a71558662c64)
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