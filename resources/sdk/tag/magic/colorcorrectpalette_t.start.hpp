#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagCOLORCORRECTPALETTE.emr", emr, 0x0, 0x40, true, 0x2dff9c546dbdb29b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORCORRECTPALETTE.ihPalette", ih_palette, 0x40, 0x20, true, 0x581a6ecf391d3a47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORCORRECTPALETTE.nFirstEntry", n_first_entry, 0x60, 0x20, true, 0xeaa77681e54655bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORCORRECTPALETTE.nPalEntries", n_pal_entries, 0x80, 0x20, true, 0x92cc6a456a24e90e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOLORCORRECTPALETTE.nReserved", n_reserved, 0xa0, 0x20, true, 0xbfed2c2a72e78e6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif