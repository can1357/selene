#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_RATIONAL.Numerator", numerator, 0x0, 0x20, true, 0x909de8d400bc8687)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_RATIONAL.Denominator", denominator, 0x20, 0x20, true, 0x680429fb521c6101)
#else
#define _m00
#define _m01
#endif