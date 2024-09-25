#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ENUMADAPTERS_FILTER.IncludeComputeOnly", include_compute_only, 0x0, 0x1, true, 0xafd477f944c97bae, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_ENUMADAPTERS_FILTER.IncludeDisplayOnly", include_display_only, 0x1, 0x1, true, 0xe851c9ec8e54219b, 1, uint64_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ENUMADAPTERS_FILTER.Value", value, 0x0, 0x40, true, 0x818d1a86193e31d0)
#else
#define _m00
#define _m01
#define _m02
#endif