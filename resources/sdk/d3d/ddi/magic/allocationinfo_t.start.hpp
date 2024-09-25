#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO.hAllocation", h_allocation, 0x0, 0x20, true, 0xf55d1d21dd310a6e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DDDI_ALLOCATIONINFO.pSystemMem", p_system_mem, 0x40, 0x40, true, 0xa38591eec2678144)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_ALLOCATIONINFO.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x888bf853194957ef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0x4329e9ef211013dd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO.VidPnSourceId", vid_pn_source_id, 0xe0, 0x20, true, 0xdf7eff46acbfa3e)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONINFO.Flags.Primary", primary, 0x0, 0x1, true, 0xf12a5eef1a70eff8, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_ALLOCATIONINFO.Flags.Stereo", stereo, 0x1, 0x1, true, 0xe2630f17fd818af3, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_ALLOCATIONINFO.Flags.Value", value, 0x0, 0x20, true, 0x3a7f98a9cf6d5a6d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DDDI_ALLOCATIONINFO.Flags", flags, 0x100, 0x20, true, 0x5ce0120c8e2fe7d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif