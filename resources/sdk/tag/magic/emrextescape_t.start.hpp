#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTESCAPE.emr", emr, 0x0, 0x40, true, 0x566882b3bf64c475)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMREXTESCAPE.iEscape", i_escape, 0x40, 0x20, true, 0x870419984f41eb7f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMREXTESCAPE.cbEscData", cb_esc_data, 0x60, 0x20, true, 0x56ddfec8d4e87bfb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagEMREXTESCAPE.EscData", esc_data, 0x80, 0x8, true, 0x2d6a83c267c17026)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif