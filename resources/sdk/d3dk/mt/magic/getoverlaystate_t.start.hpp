#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETOVERLAYSTATE.hDevice", h_device, 0x0, 0x20, true, 0x98565bb11ad747d4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETOVERLAYSTATE.hOverlay", h_overlay, 0x20, 0x20, true, 0x64593ca7e0374e74)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_GETOVERLAYSTATE.OverlayEnabled", overlay_enabled, 0x40, 0x8, true, 0x575d76ea8dd6a214)
#else
#define _m00
#define _m01
#define _m02
#endif