#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYADAPTERINFO.hAdapter", h_adapter, 0x0, 0x20, true, 0xd7f7d8c6d23983e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kmtqueryadapterinfotype_t), "_D3DKMT_QUERYADAPTERINFO.Type", type, 0x20, 0x20, true, 0x8e3228681094f12c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYADAPTERINFO.pPrivateDriverData", p_private_driver_data, 0x40, 0x40, true, 0x51b741a20f4a0b1f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYADAPTERINFO.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0x49d9ab49e6795663)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif