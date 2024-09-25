#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxSnoopLatencyValue", max_snoop_latency_value, 0x0, 0xa, true, 0x967d0ed7d85efd8c, 10, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxSnoopLatencyScale", max_snoop_latency_scale, 0xa, 0x3, true, 0x34a61ce7043a33e1, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.Rsvd", rsvd, 0xd, 0x2, true, 0x2a008fbe7f6bba84, 2, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxSnoopRequirement", max_snoop_requirement, 0xf, 0x1, true, 0x6cf50a6a98bfcfcb, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxNoSnoopLatencyValue", max_no_snoop_latency_value, 0x10, 0xa, true, 0xd1a24857938fb684, 10, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxNoSnoopLatencyScale", max_no_snoop_latency_scale, 0x1a, 0x3, true, 0xf3bb28b48a7be4f1, 3, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.Rsvd2", rsvd2, 0x1d, 0x2, true, 0x26bfa2a473bbc035, 2, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.MaxNoSnoopRequirement", max_no_snoop_requirement, 0x1f, 0x1, true, 0xb5bbacfe1bc3b2ed, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x54f6ca69526f58af)
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
#endif