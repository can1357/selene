#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROY_OUTPUTDUPL.hAdapter", h_adapter, 0x0, 0x20, true, 0x22f4826fd6d1b2fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROY_OUTPUTDUPL.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x777f307facb90b4f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_DESTROY_OUTPUTDUPL.bDestroyAllContexts", b_destroy_all_contexts, 0x40, 0x20, true, 0x1044fcbcc452024)
#else
#define _m00
#define _m01
#define _m02
#endif