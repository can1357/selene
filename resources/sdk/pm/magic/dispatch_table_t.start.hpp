#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PM_DISPATCH_TABLE.Signature", signature, 0x0, 0x20, true, 0xccc0fd7f1e9ddab0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PM_DISPATCH_TABLE.Version", version, 0x20, 0x20, true, 0x91d65a3bc8d3b8d5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_PM_DISPATCH_TABLE.Function", function, 0x40, 0x40, true, 0xd73ac29f5a5de5bb)
#else
#define _m00
#define _m01
#define _m02
#endif