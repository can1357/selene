#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER.CRSSoftwareVisibility", crs_software_visibility, 0x0, 0x1, true, 0x416e4cb823e6774c, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER.Rsvd", rsvd, 0x1, 0xf, true, 0xf6074334337744a2, 15, uint16_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x51538a7b2ae65728)
#else
#define _m00
#define _m01
#define _m02
#endif