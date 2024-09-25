#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.hAdapter", h_adapter, 0x0, 0x20, true, 0xbbdb49d7471de870)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.ContextCount", context_count, 0x20, 0x20, true, 0x5db6e14bb3f011dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.pContextList", p_context_list, 0x40, 0x40, true, 0x94cbb49a7c44c0e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x773ea48e5a3540ed)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.PresentCount", present_count, 0xa0, 0x20, true, 0xdf2258a9961ab11c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_multiplane_overlay_flags_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.Flags", flags, 0xc0, 0x20, true, 0x66341d632f7cd61b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.PresentPlaneCount", present_plane_count, 0xe0, 0x20, true, 0x6c33313a07d303c0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay3_t**), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.ppPresentPlanes", pp_present_planes, 0x100, 0x40, true, 0x50b537d11bced6e9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_post_composition_t*), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.pPostComposition", p_post_composition, 0x140, 0x40, true, 0x96d75d917b4e97c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.Duration", duration, 0x180, 0x20, true, 0xb124d4abaa634f68)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::hdr_metadata_type_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.HDRMetaDataType", hdr_meta_data_type, 0x1a0, 0x20, true, 0x532d51b768ccfd1f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.HDRMetaDataSize", hdr_meta_data_size, 0x1c0, 0x20, true, 0x4dc5ce3670139468)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.pHDRMetaData", p_hdr_meta_data, 0x200, 0x40, true, 0x8f5aa29a2dd34d5a)
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