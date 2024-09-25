#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_RGB.Red", red, 0x0, 0x20, true, 0x17ff040ef22e1885)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_RGB.Green", green, 0x20, 0x20, true, 0x886d7b1f7ce90cd1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_RGB.Blue", blue, 0x40, 0x20, true, 0x672d7e7347f7e9f1)
#else
#define _m00
#define _m01
#define _m02
#endif