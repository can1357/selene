#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_AYUVsample2.bCrValue", b_cr_value, 0x0, 0x8, true, 0xf836588a93c36a56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_AYUVsample2.bCbValue", b_cb_value, 0x8, 0x8, true, 0xdb53c9839c8c5651)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_AYUVsample2.bY_Value", b_y_value, 0x10, 0x8, true, 0x128a31b2a49329c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_AYUVsample2.bSampleAlpha8", b_sample_alpha8, 0x18, 0x8, true, 0xab7e4b7b62e6defd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif