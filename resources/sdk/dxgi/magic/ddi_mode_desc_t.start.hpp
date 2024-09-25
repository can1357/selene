#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MODE_DESC.Width", width, 0x0, 0x20, true, 0xf3fd5155c16f96c6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MODE_DESC.Height", height, 0x20, 0x20, true, 0x9faf0d403c6e47f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::format_t), "DXGI_DDI_MODE_DESC.Format", format, 0x40, 0x20, true, 0x8dc562af50d041d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_rational_t), "DXGI_DDI_MODE_DESC.RefreshRate", refresh_rate, 0x60, 0x40, true, 0xa7f7cb8a3c661045)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_scanline_order_t), "DXGI_DDI_MODE_DESC.ScanlineOrdering", scanline_ordering, 0xa0, 0x20, true, 0x7cda6cc5ba0a6c40)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI_DDI_MODE_DESC.Rotation", rotation, 0xc0, 0x20, true, 0xe912f0d908611d6d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_scaling_t), "DXGI_DDI_MODE_DESC.Scaling", scaling, 0xe0, 0x20, true, 0xc5ffbee66ea65f26)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif