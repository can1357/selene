#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DDDIARG_CREATERESOURCE.Format", format, 0x0, 0x20, true, 0x39ca9910bc75a0c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::pool_t), "_D3DDDIARG_CREATERESOURCE.Pool", pool, 0x20, 0x20, true, 0xaeb7669fe7fa23dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::d3dddimultisample_type_t), "_D3DDDIARG_CREATERESOURCE.MultisampleType", multisample_type, 0x40, 0x20, true, 0x97c609df93eb4c1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE.MultisampleQuality", multisample_quality, 0x60, 0x20, true, 0x22f25ae0421a369f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3d::ddi::surfaceinfo_t*), "_D3DDDIARG_CREATERESOURCE.pSurfList", p_surf_list, 0x80, 0x40, true, 0xb8bbdf705a935975)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE.SurfCount", surf_count, 0xc0, 0x20, true, 0xedaf363200b02f8d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE.MipLevels", mip_levels, 0xe0, 0x20, true, 0x1db69127f015ffc7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE.Fvf", fvf, 0x100, 0x20, true, 0xa5c0d6716806bd92)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDIARG_CREATERESOURCE.VidPnSourceId", vid_pn_source_id, 0x120, 0x20, true, 0x38a9b4e7582740a9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DDDIARG_CREATERESOURCE.RefreshRate", refresh_rate, 0x140, 0x40, true, 0xe6d388ccdffad16b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDIARG_CREATERESOURCE.hResource", h_resource, 0x180, 0x40, true, 0xcca467da2fcaaa1d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::resourceflags_t), "_D3DDDIARG_CREATERESOURCE.Flags", flags, 0x1c0, 0x20, true, 0x378d7f95bfbef08f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DDDIARG_CREATERESOURCE.Rotation", rotation, 0x1e0, 0x20, true, 0x7338b7172c6ecdb8)
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
#endif