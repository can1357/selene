#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagMETAFILEPICT.mm", mm, 0x0, 0x20, true, 0x2fd6e27ba7a16316)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagMETAFILEPICT.xExt", x_ext, 0x20, 0x20, true, 0xdd95ff0089ebb6a3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagMETAFILEPICT.yExt", y_ext, 0x40, 0x20, true, 0xa7d7e71737732dda)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hmetafile_t*), "tagMETAFILEPICT.hMF", h_mf, 0x80, 0x40, true, 0x49c2e23698763e73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif