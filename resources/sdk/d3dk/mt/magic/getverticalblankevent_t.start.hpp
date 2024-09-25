#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETVERTICALBLANKEVENT.hAdapter", h_adapter, 0x0, 0x20, true, 0x333058d5d442d740)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETVERTICALBLANKEVENT.hDevice", h_device, 0x20, 0x20, true, 0x7c488a95faba8507)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETVERTICALBLANKEVENT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x8ad63d67eca551d8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_D3DKMT_GETVERTICALBLANKEVENT.phEvent", ph_event, 0x80, 0x40, true, 0xc0afb8b05289a965)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif