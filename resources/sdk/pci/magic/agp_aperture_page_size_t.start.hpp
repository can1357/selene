#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PCI_AGP_APERTURE_PAGE_SIZE.PageSizeMask", page_size_mask, 0x0, 0xb, true, 0xcae49ec60f55f064, 11, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_APERTURE_PAGE_SIZE.Rsvd1", rsvd1, 0xb, 0x1, true, 0xde177b533f3ef7aa, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_AGP_APERTURE_PAGE_SIZE.PageSizeSelect", page_size_select, 0xc, 0x4, true, 0x1749ea13f9376548, 4, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif