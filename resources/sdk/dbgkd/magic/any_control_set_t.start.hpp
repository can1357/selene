#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::x86_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.X86ControlSet", x86_control_set, 0x0, 0x80, true, 0x77c2c6c207c12153)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_ANY_CONTROL_SET.AlphaControlSet", alpha_control_set, 0x0, 0x20, true, 0x8a7ffca5a4f5daa3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ia64_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.IA64ControlSet", ia64_control_set, 0x0, 0xa0, true, 0xbaf688bbb49d2453)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::amd64_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.Amd64ControlSet", amd64_control_set, 0x0, 0xe0, true, 0x9a61356a5ab856a2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::arm_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.ArmControlSet", arm_control_set, 0x0, 0x60, true, 0xfa0cf634e1b44fab)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::arm64_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.Arm64ControlSet", arm64_control_set, 0x0, 0xc0, true, 0xa46a686656372f49)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::armce_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.ArmCeControlSet", arm_ce_control_set, 0x0, 0x60, true, 0xf7bc3e2d9c970698)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ppc_dbgkd_control_set_t), "_DBGKD_ANY_CONTROL_SET.PpcControlSet", ppc_control_set, 0x0, 0x60, true, 0x2f4c4e45634519db)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif