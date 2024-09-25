#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_FPB_RID_VECTOR_CONTROL2_REGISTER.Rsvd0", rsvd0, 0x0, 0x3, true, 0x768fad3738ed133f, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_PCI_FPB_RID_VECTOR_CONTROL2_REGISTER.RidSecondaryStart", rid_secondary_start, 0x3, 0xd, true, 0x9ef13e6e57857340, 13, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_FPB_RID_VECTOR_CONTROL2_REGISTER.Rsvd1", rsvd1, 0x10, 0x10, true, 0x781dbd000ee3e3a1, 16, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_RID_VECTOR_CONTROL2_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x7a8c41ef5496a4b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif