#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2.DvsecId", dvsec_id, 0x0, 0x10, true, 0xfb19b0dc527ea0c5, 16, uint16_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x88ad084d2b361eaf)
#else
#define _m00
#define _m01
#endif