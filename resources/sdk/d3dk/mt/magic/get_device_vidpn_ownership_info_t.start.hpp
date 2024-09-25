#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO.hDevice", h_device, 0x0, 0x20, true, 0x2ff7b0593e373a9c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO.bFailedDwmAcquireVidPn", b_failed_dwm_acquire_vid_pn, 0x20, 0x8, true, 0x4507c0ab8ece22ed)
#else
#define _m00
#define _m01
#endif