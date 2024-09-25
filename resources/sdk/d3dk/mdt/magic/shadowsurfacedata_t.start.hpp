#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHADOWSURFACEDATA.Width", width, 0x0, 0x20, true, 0xb72b3f994ff3c8aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHADOWSURFACEDATA.Height", height, 0x20, 0x20, true, 0x4d9039d19eb1d598)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMDT_SHADOWSURFACEDATA.Format", format, 0x40, 0x20, true, 0x8440a9662e0954f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHADOWSURFACEDATA.Pitch", pitch, 0x60, 0x20, true, 0xe8d42c0e0ed7f4ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif