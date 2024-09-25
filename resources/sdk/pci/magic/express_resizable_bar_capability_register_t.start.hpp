#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER.Rsvd", rsvd, 0x0, 0x4, true, 0x4188178f23992696, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER.SizesSupported", sizes_supported, 0x4, 0x14, true, 0x5ee9c1dc538cf5ee, 20, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER.Rsvd2", rsvd2, 0x18, 0x8, true, 0x7ac611878da5cfac, 8, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x5d901ae24ff487f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif