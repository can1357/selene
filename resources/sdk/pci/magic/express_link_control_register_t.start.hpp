#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.ActiveStatePMControl", active_state_pm_control, 0x0, 0x2, true, 0xd388a09c4ba76cbf, 2, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.Rsvd1", rsvd1, 0x2, 0x1, true, 0xe5b39b4f9be0ff2c, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.ReadCompletionBoundary", read_completion_boundary, 0x3, 0x1, true, 0x98e083a0bbec648f, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.LinkDisable", link_disable, 0x4, 0x1, true, 0x6deab493d3ad3646, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.RetrainLink", retrain_link, 0x5, 0x1, true, 0xb61d7623df632375, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.CommonClockConfig", common_clock_config, 0x6, 0x1, true, 0x6a8ce2c3166cb829, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.ExtendedSynch", extended_synch, 0x7, 0x1, true, 0xdacb066c81a041b1, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.EnableClockPowerManagement", enable_clock_power_management, 0x8, 0x1, true, 0xbf192415f9a2bccd, 1, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.Rsvd2", rsvd2, 0x9, 0x7, true, 0x5e384aea7646a6b8, 7, uint16_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_LINK_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xb900c375e14b172a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif