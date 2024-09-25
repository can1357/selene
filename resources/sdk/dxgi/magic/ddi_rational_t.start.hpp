#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_RATIONAL.Numerator", numerator, 0x0, 0x20, true, 0x32b1e5fde7ee8ba6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_RATIONAL.Denominator", denominator, 0x20, 0x20, true, 0x88def3200b23d2b9)
#else
#define _m00
#define _m01
#endif