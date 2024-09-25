#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP.hAdapter", h_adapter, 0x0, 0x20, true, 0x6668c1984a140c95)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xf6ce783d937943a0)
#else
#define _m00
#define _m01
#endif