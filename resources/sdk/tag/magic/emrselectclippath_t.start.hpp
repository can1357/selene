#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSELECTCLIPPATH.emr", emr, 0x0, 0x40, true, 0x8f074dfbf6ceb424)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSELECTCLIPPATH.iMode", i_mode, 0x40, 0x20, true, 0x8e0c4a07938c9542)
#else
#define _m00
#define _m01
#endif