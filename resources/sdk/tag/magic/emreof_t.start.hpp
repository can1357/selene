#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREOF.emr", emr, 0x0, 0x40, true, 0x9ce6080849b432e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREOF.nPalEntries", n_pal_entries, 0x40, 0x20, true, 0xde6b26342d8c2a1f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREOF.offPalEntries", off_pal_entries, 0x60, 0x20, true, 0x144df08188939b46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREOF.nSizeLast", n_size_last, 0x80, 0x20, true, 0x9c4679640e177a3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif