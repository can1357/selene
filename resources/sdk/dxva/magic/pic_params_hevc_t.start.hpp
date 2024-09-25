#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_HEVC.PicWidthInMinCbsY", pic_width_in_min_cbs_y, 0x0, 0x10, true, 0xd210c43336ebe969)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_HEVC.PicHeightInMinCbsY", pic_height_in_min_cbs_y, 0x10, 0x10, true, 0x5294fb06ddf6b7cc)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_HEVC.chroma_format_idc", chroma_format_idc, 0x20, 0x2, true, 0xb91d770a3fa7f850, 2, uint16_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.separate_colour_plane_flag", separate_colour_plane_flag, 0x22, 0x1, true, 0xf6ae4f61954f7b13, 1, uint16_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_HEVC.bit_depth_luma_minus8", bit_depth_luma_minus8, 0x23, 0x3, true, 0x87ee719c72eb2d05, 3, uint16_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_HEVC.bit_depth_chroma_minus8", bit_depth_chroma_minus8, 0x26, 0x3, true, 0x2ece47651ace3891, 3, uint16_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXVA_PicParams_HEVC.log2_max_pic_order_cnt_lsb_minus4", log2_max_pic_order_cnt_lsb_minus4, 0x29, 0x4, true, 0x25a78e6fa0f8f68a, 4, uint16_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.NoPicReorderingFlag", no_pic_reordering_flag, 0x2d, 0x1, true, 0x13787f2ed9b72c0f, 1, uint16_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.NoBiPredFlag", no_bi_pred_flag, 0x2e, 0x1, true, 0x77e8a6d98f1acd96, 1, uint16_t)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_HEVC.wFormatAndSequenceInfoFlags", w_format_and_sequence_info_flags, 0x20, 0x10, true, 0xda5ecae87ebb2bf9)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_hevc_t), "_DXVA_PicParams_HEVC.CurrPic", curr_pic, 0x30, 0x8, true, 0x2acd2668df80926b)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.sps_max_dec_pic_buffering_minus1", sps_max_dec_pic_buffering_minus1, 0x38, 0x8, true, 0x77ac781cab408ded)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.log2_min_luma_coding_block_size_minus3", log2_min_luma_coding_block_size_minus3, 0x40, 0x8, true, 0x2aaa7d629d07c0e2)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.log2_diff_max_min_luma_coding_block_size", log2_diff_max_min_luma_coding_block_size, 0x48, 0x8, true, 0x306414fb6e487514)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.log2_min_transform_block_size_minus2", log2_min_transform_block_size_minus2, 0x50, 0x8, true, 0x31a843cb221d177d)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.log2_diff_max_min_transform_block_size", log2_diff_max_min_transform_block_size, 0x58, 0x8, true, 0xffad15cd958b972c)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.max_transform_hierarchy_depth_inter", max_transform_hierarchy_depth_inter, 0x60, 0x8, true, 0x759c05efd088a933)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.max_transform_hierarchy_depth_intra", max_transform_hierarchy_depth_intra, 0x68, 0x8, true, 0x7415d396b9aa2b31)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_short_term_ref_pic_sets", num_short_term_ref_pic_sets, 0x70, 0x8, true, 0xe28069fe79be9b35)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_long_term_ref_pics_sps", num_long_term_ref_pics_sps, 0x78, 0x8, true, 0x3844e4012e991e2a)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_ref_idx_l0_default_active_minus1", num_ref_idx_l0_default_active_minus1, 0x80, 0x8, true, 0x30a25fbc697e2d31)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_ref_idx_l1_default_active_minus1", num_ref_idx_l1_default_active_minus1, 0x88, 0x8, true, 0xb295dc397685a2f)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_HEVC.init_qp_minus26", init_qp_minus26, 0x90, 0x8, true, 0xdd7b1c8a2c186838)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.ucNumDeltaPocsOfRefRpsIdx", uc_num_delta_pocs_of_ref_rps_idx, 0x98, 0x8, true, 0xa8d4b9ee904ae0c8)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_HEVC.wNumBitsForShortTermRPSInSlice", w_num_bits_for_short_term_rps_in_slice, 0xa0, 0x10, true, 0xce782584f9b43972)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.scaling_list_enabled_flag", scaling_list_enabled_flag, 0xc0, 0x1, true, 0xb4eeb08e5f88e9dc, 1, uint32_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.amp_enabled_flag", amp_enabled_flag, 0xc1, 0x1, true, 0xb38525e73a1d2ee, 1, uint32_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.sample_adaptive_offset_enabled_flag", sample_adaptive_offset_enabled_flag, 0xc2, 0x1, true, 0xbdc972cc67db2824, 1, uint32_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.pcm_enabled_flag", pcm_enabled_flag, 0xc3, 0x1, true, 0xa9a357ac6f080dac, 1, uint32_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXVA_PicParams_HEVC.pcm_sample_bit_depth_luma_minus1", pcm_sample_bit_depth_luma_minus1, 0xc4, 0x4, true, 0x8b623c24b7633d3b, 4, uint32_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXVA_PicParams_HEVC.pcm_sample_bit_depth_chroma_minus1", pcm_sample_bit_depth_chroma_minus1, 0xc8, 0x4, true, 0x459e74a7169df23d, 4, uint32_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_HEVC.log2_min_pcm_luma_coding_block_size_minus3", log2_min_pcm_luma_coding_block_size_minus3, 0xcc, 0x2, true, 0xb2eed7fbc7e045df, 2, uint32_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_HEVC.log2_diff_max_min_pcm_luma_coding_block_size", log2_diff_max_min_pcm_luma_coding_block_size, 0xce, 0x2, true, 0x66a32a7bc7b969ee, 2, uint32_t)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.pcm_loop_filter_disabled_flag", pcm_loop_filter_disabled_flag, 0xd0, 0x1, true, 0x2e2b52620e99fedf, 1, uint32_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.long_term_ref_pics_present_flag", long_term_ref_pics_present_flag, 0xd1, 0x1, true, 0x86cf8d371ee6e851, 1, uint32_t)
#define _m035 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.sps_temporal_mvp_enabled_flag", sps_temporal_mvp_enabled_flag, 0xd2, 0x1, true, 0x8c949ad45ab0014a, 1, uint32_t)
#define _m036 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.strong_intra_smoothing_enabled_flag", strong_intra_smoothing_enabled_flag, 0xd3, 0x1, true, 0xe98dfd007beb0337, 1, uint32_t)
#define _m037 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.dependent_slice_segments_enabled_flag", dependent_slice_segments_enabled_flag, 0xd4, 0x1, true, 0xc93ceda3f77684d3, 1, uint32_t)
#define _m038 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.output_flag_present_flag", output_flag_present_flag, 0xd5, 0x1, true, 0xdbc17d62ea99f547, 1, uint32_t)
#define _m039 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_HEVC.num_extra_slice_header_bits", num_extra_slice_header_bits, 0xd6, 0x3, true, 0xc29690f4275ac6f3, 3, uint32_t)
#define _m040 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.sign_data_hiding_enabled_flag", sign_data_hiding_enabled_flag, 0xd9, 0x1, true, 0x22ee28e9e5ce223, 1, uint32_t)
#define _m041 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.cabac_init_present_flag", cabac_init_present_flag, 0xda, 0x1, true, 0x616d9e73da7f66f4, 1, uint32_t)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_HEVC.dwCodingParamToolFlags", dw_coding_param_tool_flags, 0xc0, 0x20, true, 0x622f47166049455e)
#define _m043 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.constrained_intra_pred_flag", constrained_intra_pred_flag, 0xe0, 0x1, true, 0x664d52817bd68125, 1, uint32_t)
#define _m044 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.transform_skip_enabled_flag", transform_skip_enabled_flag, 0xe1, 0x1, true, 0x87e328b40b29a278, 1, uint32_t)
#define _m045 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.cu_qp_delta_enabled_flag", cu_qp_delta_enabled_flag, 0xe2, 0x1, true, 0x4e45cf737c35698b, 1, uint32_t)
#define _m046 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.pps_slice_chroma_qp_offsets_present_flag", pps_slice_chroma_qp_offsets_present_flag, 0xe3, 0x1, true, 0x962e09c6f9910319, 1, uint32_t)
#define _m047 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.weighted_pred_flag", weighted_pred_flag, 0xe4, 0x1, true, 0x68fd5ceb8b1dcbe4, 1, uint32_t)
#define _m048 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.weighted_bipred_flag", weighted_bipred_flag, 0xe5, 0x1, true, 0x24f0cdb0ae436452, 1, uint32_t)
#define _m049 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.transquant_bypass_enabled_flag", transquant_bypass_enabled_flag, 0xe6, 0x1, true, 0xb2ac510f07a5c1c9, 1, uint32_t)
#define _m050 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.tiles_enabled_flag", tiles_enabled_flag, 0xe7, 0x1, true, 0xbb1c805148cb8cb6, 1, uint32_t)
#define _m051 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.entropy_coding_sync_enabled_flag", entropy_coding_sync_enabled_flag, 0xe8, 0x1, true, 0xbd7e51adf6314130, 1, uint32_t)
#define _m052 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.uniform_spacing_flag", uniform_spacing_flag, 0xe9, 0x1, true, 0x5eae5bba51fb65cc, 1, uint32_t)
#define _m053 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.loop_filter_across_tiles_enabled_flag", loop_filter_across_tiles_enabled_flag, 0xea, 0x1, true, 0x3363a34eac970152, 1, uint32_t)
#define _m054 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.pps_loop_filter_across_slices_enabled_flag", pps_loop_filter_across_slices_enabled_flag, 0xeb, 0x1, true, 0xe75f25a0c0ce412, 1, uint32_t)
#define _m055 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.deblocking_filter_override_enabled_flag", deblocking_filter_override_enabled_flag, 0xec, 0x1, true, 0x39d80589dcbd144a, 1, uint32_t)
#define _m056 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.pps_deblocking_filter_disabled_flag", pps_deblocking_filter_disabled_flag, 0xed, 0x1, true, 0x663a8444322aa696, 1, uint32_t)
#define _m057 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.lists_modification_present_flag", lists_modification_present_flag, 0xee, 0x1, true, 0x7634a9a92a546b86, 1, uint32_t)
#define _m058 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.slice_segment_header_extension_present_flag", slice_segment_header_extension_present_flag, 0xef, 0x1, true, 0xde0c917f2eb5ab76, 1, uint32_t)
#define _m059 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.IrapPicFlag", irap_pic_flag, 0xf0, 0x1, true, 0xa0b19a6408d9f6dd, 1, uint32_t)
#define _m060 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.IdrPicFlag", idr_pic_flag, 0xf1, 0x1, true, 0x875d6359ebf89f64, 1, uint32_t)
#define _m061 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_HEVC.IntraPicFlag", intra_pic_flag, 0xf2, 0x1, true, 0x61125925cbe8cf30, 1, uint32_t)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_HEVC.dwCodingSettingPicturePropertyFlags", dw_coding_setting_picture_property_flags, 0xe0, 0x20, true, 0xfbd32401cc34fc0f)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_HEVC.pps_cb_qp_offset", pps_cb_qp_offset, 0x100, 0x8, true, 0x2fc5239e087d2b40)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_HEVC.pps_cr_qp_offset", pps_cr_qp_offset, 0x108, 0x8, true, 0xb23d7618e2144b32)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_tile_columns_minus1", num_tile_columns_minus1, 0x110, 0x8, true, 0x38a3dbdb27cfa687)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.num_tile_rows_minus1", num_tile_rows_minus1, 0x118, 0x8, true, 0x78d5cd4b9ad12f17)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 19>), "_DXVA_PicParams_HEVC.column_width_minus1", column_width_minus1, 0x120, 0x30, true, 0x464b4f94770b38a2)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 21>), "_DXVA_PicParams_HEVC.row_height_minus1", row_height_minus1, 0x250, 0x50, true, 0xca49e4c427e8a1d2)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.diff_cu_qp_delta_depth", diff_cu_qp_delta_depth, 0x3a0, 0x8, true, 0xbfcee8b3b4313a44)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_HEVC.pps_beta_offset_div2", pps_beta_offset_div2, 0x3a8, 0x8, true, 0x9c5771ebac805132)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_HEVC.pps_tc_offset_div2", pps_tc_offset_div2, 0x3b0, 0x8, true, 0x3cb30a08447a53bf)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_HEVC.log2_parallel_merge_level_minus2", log2_parallel_merge_level_minus2, 0x3b8, 0x8, true, 0x4c765fc981b3a591)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXVA_PicParams_HEVC.CurrPicOrderCntVal", curr_pic_order_cnt_val, 0x3c0, 0x20, true, 0x9d31460d421cd365)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::pic_entry_hevc_t, 15>), "_DXVA_PicParams_HEVC.RefPicList", ref_pic_list, 0x3e0, 0x78, true, 0xfa33e918bed66182)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 15>), "_DXVA_PicParams_HEVC.PicOrderCntValList", pic_order_cnt_val_list, 0x460, 0xe0, true, 0x232b06a551685562)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_DXVA_PicParams_HEVC.RefPicSetStCurrBefore", ref_pic_set_st_curr_before, 0x640, 0x40, true, 0xc3e00e34d53c1de)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_DXVA_PicParams_HEVC.RefPicSetStCurrAfter", ref_pic_set_st_curr_after, 0x680, 0x40, true, 0x5d9d5b62af2e6969)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_DXVA_PicParams_HEVC.RefPicSetLtCurr", ref_pic_set_lt_curr, 0x6c0, 0x40, true, 0xb68d1f20c7f2366e)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_HEVC.StatusReportFeedbackNumber", status_report_feedback_number, 0x720, 0x20, true, 0xc838f2eaacfa4cee)
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
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#endif