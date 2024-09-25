#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_RELEASE_FRAME.hAdapter", h_adapter, 0x0, 0x20, true, 0x9b9dc34e68e4e237)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_RELEASE_FRAME.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xab07a28915d5c35c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_RELEASE_FRAME.NextKeyMutexIdx", next_key_mutex_idx, 0x40, 0x20, true, 0x3b32272515a1f6cb)
#else
#define _m00
#define _m01
#define _m02
#endif