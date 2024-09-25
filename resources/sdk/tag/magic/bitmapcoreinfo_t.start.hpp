#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::bitmapcoreheader_t), "tagBITMAPCOREINFO.bmciHeader", bmci_header, 0x0, 0x60, true, 0x59547e7a8f1974c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rgbtriple_t, 1>), "tagBITMAPCOREINFO.bmciColors", bmci_colors, 0x60, 0x18, true, 0xe85ff8b3c3490213)
#else
#define _m00
#define _m01
#endif