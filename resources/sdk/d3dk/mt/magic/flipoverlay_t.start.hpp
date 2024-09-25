#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPOVERLAY.hDevice", h_device, 0x0, 0x20, true, 0xa529a7e75be594cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPOVERLAY.hOverlay", h_overlay, 0x20, 0x20, true, 0xff9419a746118970)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPOVERLAY.hSource", h_source, 0x40, 0x20, true, 0xafbe347a1317123c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_FLIPOVERLAY.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x730b658eff1d683a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPOVERLAY.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0xf40cdb9833e02144)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif