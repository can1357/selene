#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETPALETTEENTRIES.emr", emr, 0x0, 0x40, true, 0x6517993d64addc31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETPALETTEENTRIES.ihPal", ih_pal, 0x40, 0x20, true, 0x4d8be3059bb570e5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETPALETTEENTRIES.iStart", i_start, 0x60, 0x20, true, 0x72b9a24b290e463d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETPALETTEENTRIES.cEntries", c_entries, 0x80, 0x20, true, 0xa76c4dd2645ce5ef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::paletteentry_t, 1>), "tagEMRSETPALETTEENTRIES.aPalEntries", a_pal_entries, 0xa0, 0x20, true, 0x7ef3f7113ddcee95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif