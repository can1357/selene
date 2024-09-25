#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATE_OUTPUTDUPL.hAdapter", h_adapter, 0x0, 0x20, true, 0xe002da4874ff700b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATE_OUTPUTDUPL.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x515d46edc89c9788)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATE_OUTPUTDUPL.KeyedMutexCount", keyed_mutex_count, 0x40, 0x20, true, 0xd898a8135a00f6f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATE_OUTPUTDUPL.RequiredKeyedMutexCount", required_keyed_mutex_count, 0x60, 0x20, true, 0x9fab938038924cb9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::outputdupl_keyedmutex_t, 3>), "_D3DKMT_CREATE_OUTPUTDUPL.KeyedMutexs", keyed_mutexs, 0x80, 0xc0, true, 0xca0c1b3505942216)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outputduplcreationflags_t), "_D3DKMT_CREATE_OUTPUTDUPL.Flags", flags, 0x140, 0x20, true, 0xf9a431466eda6baa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif