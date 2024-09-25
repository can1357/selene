#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.StModeSelect", st_mode_select, 0x0, 0x3, true, 0xc18de18467e8e130, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.Rsvd", rsvd, 0x3, 0x5, true, 0xdbf344cdcbcc3949, 5, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.TphRequesterEnable", tph_requester_enable, 0x8, 0x2, true, 0xcaf401cb72757062, 2, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.Rsvd2", rsvd2, 0xa, 0x16, true, 0xc881ed27d82f7a7e, 22, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xb3171aa08bd59ee3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif