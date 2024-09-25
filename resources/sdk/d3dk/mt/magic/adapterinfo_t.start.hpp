#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERINFO.hAdapter", h_adapter, 0x0, 0x20, true, 0xb6718b8dd65dc672)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_ADAPTERINFO.AdapterLuid", adapter_luid, 0x20, 0x40, true, 0xe95368a93cabb3bf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTERINFO.NumOfSources", num_of_sources, 0x60, 0x20, true, 0xda4221283fb7c6a5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_ADAPTERINFO.bPresentMoveRegionsPreferred", b_present_move_regions_preferred, 0x80, 0x20, true, 0x844965ca23b2098a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif