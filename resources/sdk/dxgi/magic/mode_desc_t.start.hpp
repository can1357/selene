#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_MODE_DESC.Width", width, 0x0, 0x20, true, 0x9375e5c5d69241c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_MODE_DESC.Height", height, 0x20, 0x20, true, 0x5a4083a6c63b2791)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::rational_t), "DXGI_MODE_DESC.RefreshRate", refresh_rate, 0x40, 0x40, true, 0x78006fc80ef8af4f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::format_t), "DXGI_MODE_DESC.Format", format, 0x80, 0x20, true, 0xb2a6ba5c4fc060cb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::mode_scanline_order_t), "DXGI_MODE_DESC.ScanlineOrdering", scanline_ordering, 0xa0, 0x20, true, 0x952ecbcb4c2c0063)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::mode_scaling_t), "DXGI_MODE_DESC.Scaling", scaling, 0xc0, 0x20, true, 0xfa34d48c593c229e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif