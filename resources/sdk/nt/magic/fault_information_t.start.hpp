#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::fault_information_arch_t), "_FAULT_INFORMATION.Type", type, 0x0, 0x20, true, 0x2c357d36c533f005)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FAULT_INFORMATION.IsStage1", is_stage1, 0x20, 0x8, true, 0x419a3cfe2db2cc75)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fault_information_arm64_t), "_FAULT_INFORMATION.Arm64", arm64, 0x40, 0x80, true, 0x2ba1dfc2b8db3322)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fault_information_x64_t), "_FAULT_INFORMATION.X64", x64, 0x40, 0x40, true, 0x8301a2e7ab3dfeb4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif