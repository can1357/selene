#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "D3DDDI_DXGI_RGB.Red", red, 0x0, 0x20, true, 0x9a1a3b9460151ac1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "D3DDDI_DXGI_RGB.Green", green, 0x20, 0x20, true, 0x689ebec142f3075c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "D3DDDI_DXGI_RGB.Blue", blue, 0x40, 0x20, true, 0x28b92686f85ff9c1)
#else
#define _m00
#define _m01
#define _m02
#endif