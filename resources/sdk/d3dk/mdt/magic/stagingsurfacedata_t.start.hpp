#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_STAGINGSURFACEDATA.Width", width, 0x0, 0x20, true, 0xb5971561a96d6f52)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_STAGINGSURFACEDATA.Height", height, 0x20, 0x20, true, 0x85ff51658d0666c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_STAGINGSURFACEDATA.Pitch", pitch, 0x40, 0x20, true, 0xfa6ff603e7fdc4b4)
#else
#define _m00
#define _m01
#define _m02
#endif