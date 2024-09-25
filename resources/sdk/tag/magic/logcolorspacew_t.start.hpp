#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsSignature", lcs_signature, 0x0, 0x20, true, 0x62c9ce017fe02fa5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsVersion", lcs_version, 0x20, 0x20, true, 0xe076fe9209803bd1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsSize", lcs_size, 0x40, 0x20, true, 0x4ce2faa0a206fb21)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGCOLORSPACEW.lcsCSType", lcs_cs_type, 0x60, 0x20, true, 0xf54d3b2c7215bfd4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGCOLORSPACEW.lcsIntent", lcs_intent, 0x80, 0x20, true, 0x277d31c280202940)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::icexyztriple_t), "tagLOGCOLORSPACEW.lcsEndpoints", lcs_endpoints, 0xa0, 0x20, true, 0x1462a214c38ceca4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsGammaRed", lcs_gamma_red, 0x1c0, 0x20, true, 0xc82e1c766d72133c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsGammaGreen", lcs_gamma_green, 0x1e0, 0x20, true, 0x8eb17bc43c52b865)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLOGCOLORSPACEW.lcsGammaBlue", lcs_gamma_blue, 0x200, 0x20, true, 0x7fb26019244581b3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "tagLOGCOLORSPACEW.lcsFilename", lcs_filename, 0x220, 0x40, true, 0xbe27a4771fa8f74)
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