#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMONITORPOWERSTATE.hAdapter", h_adapter, 0x0, 0x20, true, 0x30045e6638a8e9ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMONITORPOWERSTATE.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x5d7d54f0b15a39d6)
#else
#define _m00
#define _m01
#endif