#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYOVERLAY.hDevice", h_device, 0x0, 0x20, true, 0x940439d601b8db73)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYOVERLAY.hOverlay", h_overlay, 0x20, 0x20, true, 0x847278c489db93b1)
#else
#define _m00
#define _m01
#endif