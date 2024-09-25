#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1.DvsecVendorId", dvsec_vendor_id, 0x0, 0x10, true, 0xfe94e31c16beeaf2, 16, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1.DvsecVersion", dvsec_version, 0x10, 0x4, true, 0x43b57052aecf9a3d, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1.DvsecLength", dvsec_length, 0x14, 0xc, true, 0x6de82c1d49c7f66c, 12, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1.AsULONG", as_ulong, 0x0, 0x20, true, 0x54ba2173a2c905e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif