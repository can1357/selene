#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRRESIZEPALETTE.emr", emr, 0x0, 0x40, true, 0xc6b9e963fe20e8f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRRESIZEPALETTE.ihPal", ih_pal, 0x40, 0x20, true, 0x8e8811a7b3f7a98e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRRESIZEPALETTE.cEntries", c_entries, 0x60, 0x20, true, 0xab6c66925b68876a)
#else
#define _m00
#define _m01
#define _m02
#endif