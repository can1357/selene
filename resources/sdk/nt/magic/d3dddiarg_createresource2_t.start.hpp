#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DDDIARG_CREATERESOURCE2.Format", format, 0x0, 0x20, true, 0x70cdd86c32c473f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::pool_t), "_D3DDDIARG_CREATERESOURCE2.Pool", pool, 0x20, 0x20, true, 0xc187492625b6ac05)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::d3dddimultisample_type_t), "_D3DDDIARG_CREATERESOURCE2.MultisampleType", multisample_type, 0x40, 0x20, true, 0xdb9ed3cacc55cc02)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE2.MultisampleQuality", multisample_quality, 0x60, 0x20, true, 0x12f340380b0bd539)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3d::ddi::surfaceinfo_t*), "_D3DDDIARG_CREATERESOURCE2.pSurfList", p_surf_list, 0x80, 0x40, true, 0xdb18dbcf4b5405d9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE2.SurfCount", surf_count, 0xc0, 0x20, true, 0x6b09d24a4b999091)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE2.MipLevels", mip_levels, 0xe0, 0x20, true, 0x2eff8139f97a2e08)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE2.Fvf", fvf, 0x100, 0x20, true, 0xaddbc553e0f2d267)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE2.VidPnSourceId", vid_pn_source_id, 0x120, 0x20, true, 0x2c00a76b8f208d91)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DDDIARG_CREATERESOURCE2.RefreshRate", refresh_rate, 0x140, 0x40, true, 0x31ff9de2b4b46434)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDIARG_CREATERESOURCE2.hResource", h_resource, 0x180, 0x40, true, 0xfaa6f97fc482af16)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::resourceflags_t), "_D3DDDIARG_CREATERESOURCE2.Flags", flags, 0x1c0, 0x20, true, 0x1d91b900ea608648)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DDDIARG_CREATERESOURCE2.Rotation", rotation, 0x1e0, 0x20, true, 0x9894d0d90f234da7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::resourceflags2_t), "_D3DDDIARG_CREATERESOURCE2.Flags2", flags2, 0x200, 0x20, true, 0xfcaf4bd38a756bf7)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif