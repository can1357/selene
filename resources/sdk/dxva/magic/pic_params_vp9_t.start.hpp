#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_PicParams_VP9.CurrPic", curr_pic, 0x0, 0x8, true, 0x9d011e18bb8b1a27)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.profile", profile, 0x8, 0x8, true, 0xcdb2e38c6b6c3062)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.frame_type", frame_type, 0x10, 0x1, true, 0x8fad429e2896f0b5, 1, uint16_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.show_frame", show_frame, 0x11, 0x1, true, 0xa149ddc20197a616, 1, uint16_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.error_resilient_mode", error_resilient_mode, 0x12, 0x1, true, 0x4ba8f593e11614e, 1, uint16_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.subsampling_x", subsampling_x, 0x13, 0x1, true, 0x57c9362f6c166d8a, 1, uint16_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.subsampling_y", subsampling_y, 0x14, 0x1, true, 0x206c780f6af3c94f, 1, uint16_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.extra_plane", extra_plane, 0x15, 0x1, true, 0x332af41c98dde19b, 1, uint16_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.refresh_frame_context", refresh_frame_context, 0x16, 0x1, true, 0x7b28984feb3eac6e, 1, uint16_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.frame_parallel_decoding_mode", frame_parallel_decoding_mode, 0x17, 0x1, true, 0xa28103934bc7380e, 1, uint16_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.intra_only", intra_only, 0x18, 0x1, true, 0x8a10b51bd881bc45, 1, uint16_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_VP9.frame_context_idx", frame_context_idx, 0x19, 0x2, true, 0xd173396273b3c8a9, 2, uint16_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_VP9.reset_frame_context", reset_frame_context, 0x1b, 0x2, true, 0xff6f945ceca1fcab, 2, uint16_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.allow_high_precision_mv", allow_high_precision_mv, 0x1d, 0x1, true, 0xb205ba4a6c45a993, 1, uint16_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_VP9.ReservedFormatInfo2Bits", reserved_format_info2_bits, 0x1e, 0x2, true, 0x5e32cea3e16ca7c3, 2, uint16_t)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_VP9.wFormatAndPictureInfoFlags", w_format_and_picture_info_flags, 0x10, 0x10, true, 0x3b2fff4ab587fdf8)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP9.width", width, 0x20, 0x20, true, 0x2f12e7b3dfd6843a)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP9.height", height, 0x40, 0x20, true, 0xe72476a8766525fa)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.BitDepthMinus8Luma", bit_depth_minus8_luma, 0x60, 0x8, true, 0x2428fe39025aeadc)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.BitDepthMinus8Chroma", bit_depth_minus8_chroma, 0x68, 0x8, true, 0xdb127942c27f854e)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.interp_filter", interp_filter, 0x70, 0x8, true, 0x57668798070fbf29)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.Reserved8Bits", reserved8_bits, 0x78, 0x8, true, 0x74e88284ed521a0b)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::pic_entry_v_px_t, 8>), "_DXVA_PicParams_VP9.ref_frame_map", ref_frame_map, 0x80, 0x40, true, 0xfaafcc223e33b373)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_DXVA_PicParams_VP9.ref_frame_coded_width", ref_frame_coded_width, 0xc0, 0x0, true, 0x5f9cde555b8cd96a)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_DXVA_PicParams_VP9.ref_frame_coded_height", ref_frame_coded_height, 0x1c0, 0x0, true, 0xdff22221d3fa4f3)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::pic_entry_v_px_t, 3>), "_DXVA_PicParams_VP9.frame_refs", frame_refs, 0x2c0, 0x18, true, 0x382a251199696f18)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 4>), "_DXVA_PicParams_VP9.ref_frame_sign_bias", ref_frame_sign_bias, 0x2d8, 0x20, true, 0xe663eb2e01cd89d2)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP9.filter_level", filter_level, 0x2f8, 0x8, true, 0x7bb74484c9256498)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP9.sharpness_level", sharpness_level, 0x300, 0x8, true, 0x616a2073ae5cb76)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.mode_ref_delta_enabled", mode_ref_delta_enabled, 0x308, 0x1, true, 0x89a9dcc5cdff0ad7, 1, uint8_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.mode_ref_delta_update", mode_ref_delta_update, 0x309, 0x1, true, 0xfe706facb99b90a9, 1, uint8_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP9.use_prev_in_find_mv_refs", use_prev_in_find_mv_refs, 0x30a, 0x1, true, 0xa2d49c22680dbf1, 1, uint8_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXVA_PicParams_VP9.ReservedControlInfo5Bits", reserved_control_info5_bits, 0x30b, 0x5, true, 0x3fe6ceb91ae7b612, 5, uint8_t)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.wControlInfoFlags", w_control_info_flags, 0x308, 0x8, true, 0xafc1a430e727c445)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 4>), "_DXVA_PicParams_VP9.ref_deltas", ref_deltas, 0x310, 0x20, true, 0xc1f828529770c263)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 2>), "_DXVA_PicParams_VP9.mode_deltas", mode_deltas, 0x330, 0x10, true, 0xef9105acb893a644)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DXVA_PicParams_VP9.base_qindex", base_qindex, 0x340, 0x10, true, 0x325302d322dda0ea)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP9.y_dc_delta_q", y_dc_delta_q, 0x350, 0x8, true, 0x23aa547720204ff6)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP9.uv_dc_delta_q", uv_dc_delta_q, 0x358, 0x8, true, 0xa6b4988038cd4126)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP9.uv_ac_delta_q", uv_ac_delta_q, 0x360, 0x8, true, 0xb1cd0164da462f5a)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::segmentation_vp9_t), "_DXVA_PicParams_VP9.stVP9Segments", st_vp9_segments, 0x368, 0x98, true, 0x13a773202529af64)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.log2_tile_cols", log2_tile_cols, 0x600, 0x8, true, 0x6a45604571d4f45d)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP9.log2_tile_rows", log2_tile_rows, 0x608, 0x8, true, 0xb2a412be738907a6)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_VP9.uncompressed_header_size_byte_aligned", uncompressed_header_size_byte_aligned, 0x610, 0x10, true, 0xd22b334207c9505f)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_VP9.first_partition_size", first_partition_size, 0x620, 0x10, true, 0x98cdb575d9386102)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_VP9.Reserved16Bits", reserved16_bits, 0x630, 0x10, true, 0xd14ccd0e029dccb0)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP9.Reserved32Bits", reserved32_bits, 0x640, 0x20, true, 0xbeda1e10f4ff2728)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP9.StatusReportFeedbackNumber", status_report_feedback_number, 0x660, 0x20, true, 0x5a1a62fc8d7e49c4)
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
#endif