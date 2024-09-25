#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO.hAdapter", h_adapter, 0x0, 0x20, true, 0xbbdd43fe37c21b19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x39708ed29572e639)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outputdupl_frameinfo_t), "_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO.FrameInfo", frame_info, 0x40, 0x80, true, 0x4a3c56f031f006f3)
#else
#define _m00
#define _m01
#define _m02
#endif