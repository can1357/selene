#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsSignature", lcs_signature, 0x0, 0x20, true, 0x4575a4f9884a1837)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsVersion", lcs_version, 0x20, 0x20, true, 0x82959f5462d5dd71)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsSize", lcs_size, 0x40, 0x20, true, 0x54f2688c6132791e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGCOLORSPACEA.lcsCSType", lcs_cs_type, 0x60, 0x20, true, 0xf0d0f49091527b20)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGCOLORSPACEA.lcsIntent", lcs_intent, 0x80, 0x20, true, 0x48ef3deabfe2cee7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::icexyztriple_t), "tagLOGCOLORSPACEA.lcsEndpoints", lcs_endpoints, 0xa0, 0x20, true, 0x43ddbf949f84ec5e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsGammaRed", lcs_gamma_red, 0x1c0, 0x20, true, 0x1f18e8d63f7e5e81)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsGammaGreen", lcs_gamma_green, 0x1e0, 0x20, true, 0x940f5d80393bf966)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEA.lcsGammaBlue", lcs_gamma_blue, 0x200, 0x20, true, 0xb367bdfe045b910c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "tagLOGCOLORSPACEA.lcsFilename", lcs_filename, 0x220, 0x20, true, 0xaf14fdbfc28a31ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif