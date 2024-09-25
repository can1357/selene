#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x349174e5d78f1643)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT.Update", update, 0x20, 0x20, true, 0x9f209831be5269a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT.KernelSupported", kernel_supported, 0x40, 0x20, true, 0xb25fcf89091e99ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT.HudSupported", hud_supported, 0x60, 0x20, true, 0x3bcd24e169f5c4b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif