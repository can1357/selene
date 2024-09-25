#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_RATIONAL.Numerator", numerator, 0x0, 0x20, true, 0x3e1a9c20499d756d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_RATIONAL.Denominator", denominator, 0x20, 0x20, true, 0x54223e4e524dc6a)
#else
#define _m00
#define _m01
#endif