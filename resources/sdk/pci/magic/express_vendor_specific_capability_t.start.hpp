#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY.Header", header, 0x0, 0x20, true, 0x3b94a5a35cae904)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY.VsecId", vsec_id, 0x20, 0x10, true, 0x16dce0b1eb2432a6)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY.VsecRev", vsec_rev, 0x30, 0x4, true, 0x916686ce2559a265, 4, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY.VsecLength", vsec_length, 0x34, 0xc, true, 0x9fdf57353e15d778, 12, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif