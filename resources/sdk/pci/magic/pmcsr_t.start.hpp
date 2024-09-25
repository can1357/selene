#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_PMCSR.PowerState", power_state, 0x0, 0x2, true, 0x19f066632d7ef3a2, 2, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR.Rsvd1", rsvd1, 0x2, 0x1, true, 0xdbcf6df5e9d1662c, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR.NoSoftReset", no_soft_reset, 0x3, 0x1, true, 0x49346c3dff8d9f63, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_PMCSR.Rsvd2", rsvd2, 0x4, 0x4, true, 0x724d35373364ec4b, 4, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR.PMEEnable", pme_enable, 0x8, 0x1, true, 0x45f218f81a28af15, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_PMCSR.DataSelect", data_select, 0x9, 0x4, true, 0xb824b3f845fbb00c, 4, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_PMCSR.DataScale", data_scale, 0xd, 0x2, true, 0x4d9796e46f5bf62b, 2, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_PMCSR.PMEStatus", pme_status, 0xf, 0x1, true, 0xe9da173fa289c17e, 1, uint16_t)
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