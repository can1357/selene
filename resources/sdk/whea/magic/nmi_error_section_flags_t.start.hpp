#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_NMI_ERROR_SECTION_FLAGS.HypervisorError", hypervisor_error, 0x0, 0x1, true, 0xe5a6216f47e10f50, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_NMI_ERROR_SECTION_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0x258aa0ea9a41a3d1)
#else
#define _m00
#define _m01
#endif