#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATECOLORSPACEW.emr", emr, 0x0, 0x40, true, 0x9ae2930acfd955f4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATECOLORSPACEW.ihCS", ih_cs, 0x40, 0x20, true, 0x5717a4f0357c7fd3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logcolorspacew_t), "tagEMRCREATECOLORSPACEW.lcs", lcs, 0x60, 0x60, true, 0xdbaf75a981a1f2e5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATECOLORSPACEW.dwFlags", dw_flags, 0x12c0, 0x20, true, 0x6182c3aebf194d8c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATECOLORSPACEW.cbData", cb_data, 0x12e0, 0x20, true, 0xaaeb0df64f0cc3ce)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMRCREATECOLORSPACEW.Data", data, 0x1300, 0x8, true, 0x57315c9adb5890ff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif