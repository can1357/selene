#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT.hAdapter", h_adapter, 0x0, 0x20, true, 0x8a447dfd8db16ab1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT.hDevice", h_device, 0x20, 0x20, true, 0x30da98d9ac9f62b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORVERTICALBLANKEVENT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x7951681df882c6cd)
#else
#define _m00
#define _m01
#define _m02
#endif