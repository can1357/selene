#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.FenceValue", fence_value, 0x0, 0x40, true, 0xd10bfae278470846)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.hLogicalSurface", h_logical_surface, 0x40, 0x40, true, 0xeb827e629c9af691)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.dxgContext", dxg_context, 0x80, 0x40, true, 0x1229cbc56cd5ea01)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.VidPnSourceId", vid_pn_source_id, 0xc0, 0x20, true, 0x1260b4f6cf830a0e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.SwapChainIndex", swap_chain_index, 0xe0, 0x20, true, 0x9e6cd4a764e9e763)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.PresentLimitSemaphoreId", present_limit_semaphore_id, 0x100, 0x40, true, 0x48af65433b44ce34)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.FlipInterval", flip_interval, 0x140, 0x20, true, 0xa84215bad147657e)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::flipmodel_presenthistorytokenflags_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.Flags", flags, 0x160, 0x20, true, 0x3ebbce57b7d7963a)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.hCompSurf", h_comp_surf, 0x180, 0x40, true, 0x45d147b8b35ed37d)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.compSurfLuid", comp_surf_luid, 0x1c0, 0x40, true, 0x3ca4da4935e100e5)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.confirmationCookie", confirmation_cookie, 0x200, 0x40, true, 0x5ed1e52de1c33a3c)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.CompositionSyncKey", composition_sync_key, 0x240, 0x40, true, 0x2dc79d4beabb7c87)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.RemainingTokens", remaining_tokens, 0x280, 0x20, true, 0x190219e3c51808ca)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.ScrollRect", scroll_rect, 0x2a0, 0x80, true, 0xc37de2ebb7e68f9f)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.ScrollOffset", scroll_offset, 0x320, 0x40, true, 0xbc926294119d6088)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.PresentCount", present_count, 0x360, 0x20, true, 0xc9c6a6dc6aff6c55)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 4>), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.RevealColor", reveal_color, 0x380, 0x80, true, 0xb8fac5b479e2d0bf)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.Rotation", rotation, 0x400, 0x20, true, 0xcc2b58a72ffa98f6)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::scatterblts_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.ScatterBlts", scatter_blts, 0x440, 0x40, true, 0x52f24e8e97b2a745)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.hSyncObject", h_sync_object, 0x440, 0x40, true, 0x3f770f7b4d326810)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::hdr_metadata_type_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.HDRMetaDataType", hdr_meta_data_type, 0x480, 0x20, true, 0x43e14b34ec6c793)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::hdr_metadata_hdr10_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.HDRMetaDataHDR10", hdr_meta_data_hdr10, 0x4a0, 0xe0, true, 0x86aa820c39a4c2d7)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::hdr_metadata_hdr10plus_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.HDRMetaDataHDR10Plus", hdr_meta_data_hdr10_plus, 0x4a0, 0x40, true, 0xdf87184990a9b613)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.SourceRect", source_rect, 0x16a0, 0x80, true, 0xeb024bb008df52b6)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.DestWidth", dest_width, 0x1720, 0x20, true, 0x7afa5de85cddcb96)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.DestHeight", dest_height, 0x1740, 0x20, true, 0xf5fc9b7fd41ea26c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.TargetRect", target_rect, 0x1760, 0x80, true, 0x4fb2c1b57338fc29)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 6>), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.Transform", transform, 0x17e0, 0xc0, true, 0x800235f7d579d019)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.CustomDuration", custom_duration, 0x18a0, 0x20, true, 0x6559c4934374f745)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.CustomDurationFlipInterval", custom_duration_flip_interval, 0x18c0, 0x20, true, 0x548a28c1fbd5717c)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.PlaneIndex", plane_index, 0x18e0, 0x20, true, 0x228ba78fe416df8a)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.ColorSpace", color_space, 0x1900, 0x20, true, 0x61cd41c7aedd4959)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::dirtyregions_t), "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN.DirtyRegions", dirty_regions, 0x1920, 0x20, true, 0x457002f18078a498)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#endif