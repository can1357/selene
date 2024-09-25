#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_INVALIDATEACTIVEVIDPN.hAdapter", h_adapter, 0x0, 0x20, true, 0xce9dd7054481be08)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_INVALIDATEACTIVEVIDPN.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x3ef31b052281293e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_INVALIDATEACTIVEVIDPN.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0x33afa4e08e6a0020)
#else
#define _m00
#define _m01
#define _m02
#endif