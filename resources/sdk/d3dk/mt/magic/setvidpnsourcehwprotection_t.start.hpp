#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETVIDPNSOURCEHWPROTECTION.hAdapter", h_adapter, 0x0, 0x20, true, 0x4fd030b36d647fd7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETVIDPNSOURCEHWPROTECTION.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xb17c471f2708697c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_SETVIDPNSOURCEHWPROTECTION.HwProtected", hw_protected, 0x40, 0x20, true, 0x8cb1e29478a0bd7c)
#else
#define _m00
#define _m01
#define _m02
#endif