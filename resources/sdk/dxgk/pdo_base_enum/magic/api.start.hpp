#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PDOBaseEnum@@QEAA@XZ$dxgkrnl.sys", 0x2b9adc, 0x0, true, 0x24fc9e6886945cdd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CountPDOs@PDOBaseEnum$dxgkrnl.sys", 0x1591e0, 0x0, true, 0x66d3f26e9d6858be)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnumPDOs@PDOBaseEnum$dxgkrnl.sys", 0x2b9ea0, 0x0, true, 0x3a9dd0927de75607)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif