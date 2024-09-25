#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.MaximumLinkSpeed", maximum_link_speed, 0x0, 0x4, true, 0x3d8acf10ba176c92, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.MaximumLinkWidth", maximum_link_width, 0x4, 0x6, true, 0x879a8e937eca7833, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.ActiveStatePMSupport", active_state_pm_support, 0xa, 0x2, true, 0x5f384437038c364c, 2, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.L0sExitLatency", l0s_exit_latency, 0xc, 0x3, true, 0x16a1b869a32bec, 3, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.L1ExitLatency", l1_exit_latency, 0xf, 0x3, true, 0xb8fa48c504543d0a, 3, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.ClockPowerManagement", clock_power_management, 0x12, 0x1, true, 0xe953187fa1c5ab5e, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.SurpriseDownErrorReportingCapable", surprise_down_error_reporting_capable, 0x13, 0x1, true, 0x9ac058281aa3f303, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.DataLinkLayerActiveReportingCapable", data_link_layer_active_reporting_capable, 0x14, 0x1, true, 0x851ed27d958c18f9, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.LinkBandwidthNotificationCapability", link_bandwidth_notification_capability, 0x15, 0x1, true, 0x961dda03b1e7a10e, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.AspmOptionalityCompliance", aspm_optionality_compliance, 0x16, 0x1, true, 0x3b95faf618cf9e02, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.Rsvd", rsvd, 0x17, 0x1, true, 0x460e4058784d4e4b, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.PortNumber", port_number, 0x18, 0x8, true, 0xfd7386423178407c, 8, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_LINK_CAPABILITIES_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x9f58e3ccd01c3aad)
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
#define _m10
#define _m11
#define _m12
#endif