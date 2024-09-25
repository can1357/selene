#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_remoteMETAFILEPICT.mm", mm, 0x0, 0x20, true, 0xa683643271b01cf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_remoteMETAFILEPICT.xExt", x_ext, 0x20, 0x20, true, 0x34277b54c50ed168)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_remoteMETAFILEPICT.yExt", y_ext, 0x40, 0x20, true, 0x34fb4d49609edfc2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_hmetafile_t*), "_remoteMETAFILEPICT.hMF", h_mf, 0x80, 0x40, true, 0xfb090acd59fca7a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif