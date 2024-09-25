#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 152>), "_DISPATCHER_CONTEXT_NONVOLREG_ARM64.Buffer", buffer, 0x0, 0x0, false, 0xfd9fc32729e2394c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 11>), "_DISPATCHER_CONTEXT_NONVOLREG_ARM64.GpNvRegs", gp_nv_regs, 0x0, 0x0, false, 0x2eb6e61c571f5abd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<double, 8>), "_DISPATCHER_CONTEXT_NONVOLREG_ARM64.FpNvRegs", fp_nv_regs, 0x0, 0x0, false, 0x68a9197ea3e76ab9)
#else
#define _m00
#define _m01
#define _m02
#endif