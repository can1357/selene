#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GRADIENT_RECT.UpperLeft", upper_left, 0x0, 0x20, true, 0xc03d8628479f7d33)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GRADIENT_RECT.LowerRight", lower_right, 0x20, 0x20, true, 0x83076f2b1ee654c2)
#else
#define _m00
#define _m01
#endif