#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_SETFSEBLOCK.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x11aff8bed84beb14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETFSEBLOCK.hAdapter", h_adapter, 0x40, 0x20, true, 0x1e199a62dda798a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETFSEBLOCK.VidPnSourceId", vid_pn_source_id, 0x60, 0x20, true, 0xb5d311a646bf3b92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::setfseblockflags_t), "_D3DKMT_SETFSEBLOCK.Flags", flags, 0x80, 0x20, true, 0x25f9483275c68e5d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif