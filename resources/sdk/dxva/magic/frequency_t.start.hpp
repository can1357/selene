#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Frequency.Numerator", numerator, 0x0, 0x20, true, 0x55d699bef0d2f34a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Frequency.Denominator", denominator, 0x20, 0x20, true, 0x18a31e37ce454941)
#else
#define _m00
#define _m01
#endif