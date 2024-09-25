#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.RequesterCapable", requester_capable, 0x0, 0x1, true, 0xd494778f493838a8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.ResponderCapable", responder_capable, 0x1, 0x1, true, 0xdc72dbe6981e4770, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.RootCapable", root_capable, 0x2, 0x1, true, 0x4df7eab13d91a6e8, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.Rsvd", rsvd, 0x3, 0x5, true, 0xc2a6e68dfbd5a93d, 5, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.LocalGranularity", local_granularity, 0x8, 0x8, true, 0xd2373a5a00eac5b1, 8, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.Rsvd2", rsvd2, 0x10, 0x10, true, 0xfbe6362606cb6b44, 16, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_PTM_CAPABILITY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xa50d1d99fa784c0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif