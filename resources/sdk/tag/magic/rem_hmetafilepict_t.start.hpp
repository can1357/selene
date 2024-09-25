#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRemHMETAFILEPICT.mm", mm, 0x0, 0x20, true, 0xca12c0a8f0debafd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRemHMETAFILEPICT.xExt", x_ext, 0x20, 0x20, true, 0xab275e0194d70b09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRemHMETAFILEPICT.yExt", y_ext, 0x40, 0x20, true, 0x7306fa5ab39884ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemHMETAFILEPICT.cbData", cb_data, 0x60, 0x20, true, 0x3588498a7de2eef5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemHMETAFILEPICT.data", data, 0x80, 0x8, true, 0x41e3e31a34f7587b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif