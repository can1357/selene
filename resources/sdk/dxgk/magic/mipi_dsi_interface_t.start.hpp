#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_MIPI_DSI_INTERFACE.Size", size, 0x0, 0x10, true, 0x71dc8da3be125989)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_MIPI_DSI_INTERFACE.Version", version, 0x10, 0x10, true, 0x335b1e95fab4c293)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MIPI_DSI_INTERFACE.Context", context, 0x40, 0x40, true, 0x563f22cefd035d97)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_MIPI_DSI_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x82df6f88b77105f6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_MIPI_DSI_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xbc68eb8f74420031)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dsicaps_t ), "_DXGK_MIPI_DSI_INTERFACE.DxgkDdiDsiCaps", dxgk_ddi_dsi_caps, 0x100, 0x40, true, 0x78776af67af4a6c8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dsitransmission_t ), "_DXGK_MIPI_DSI_INTERFACE.DxgkDdiDsiTransmission", dxgk_ddi_dsi_transmission, 0x140, 0x40, true, 0x5b8e089e8668765f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdxgkddi_dsireset_t ), "_DXGK_MIPI_DSI_INTERFACE.DxgkDdiDsiReset", dxgk_ddi_dsi_reset, 0x180, 0x40, true, 0x2a5f69ccd0d7b91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif