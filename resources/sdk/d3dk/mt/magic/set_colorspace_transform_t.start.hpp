#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_SET_COLORSPACE_TRANSFORM.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x4810af885d5ac816)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SET_COLORSPACE_TRANSFORM.VidPnTargetId", vid_pn_target_id, 0x40, 0x20, true, 0x4c907613dde00935)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::gammaramp_type_t), "_D3DKMT_SET_COLORSPACE_TRANSFORM.Type", type, 0x60, 0x20, true, 0x72d416daf0f37eed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SET_COLORSPACE_TRANSFORM.Size", size, 0x80, 0x20, true, 0xddcfce70549b28dc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_3x4_colorspace_transform_t*), "_D3DKMT_SET_COLORSPACE_TRANSFORM.pColorSpaceTransform", p_color_space_transform, 0xc0, 0x40, true, 0xaf38907c990e356d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif