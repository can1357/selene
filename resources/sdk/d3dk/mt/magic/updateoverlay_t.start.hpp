#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEOVERLAY.hDevice", h_device, 0x0, 0x20, true, 0x9cbf1c16a08a0426)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEOVERLAY.hOverlay", h_overlay, 0x20, 0x20, true, 0x2c5a9cf5387ed48c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::kerneloverlayinfo_t), "_D3DKMT_UPDATEOVERLAY.OverlayInfo", overlay_info, 0x40, 0xc0, true, 0xcfa23585a387ff4)
#else
#define _m00
#define _m01
#define _m02
#endif