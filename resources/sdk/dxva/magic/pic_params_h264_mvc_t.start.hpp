#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.wFrameWidthInMbsMinus1", w_frame_width_in_mbs_minus1, 0x0, 0x10, true, 0x96cfaed94941dab2)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.wFrameHeightInMbsMinus1", w_frame_height_in_mbs_minus1, 0x10, 0x10, true, 0xf670b2eb3248db90)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_h264_t), "_DXVA_PicParams_H264_MVC.CurrPic", curr_pic, 0x20, 0x8, true, 0xbcec9331ed17e5f3)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.num_ref_frames", num_ref_frames, 0x28, 0x8, true, 0xd554e95344672c9e)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.field_pic_flag", field_pic_flag, 0x30, 0x1, true, 0x101b9686db0281ed, 1, uint16_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.MbaffFrameFlag", mbaff_frame_flag, 0x31, 0x1, true, 0x3520e321b7ac2ce1, 1, uint16_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.residual_colour_transform_flag", residual_colour_transform_flag, 0x32, 0x1, true, 0xc776439d2646f16a, 1, uint16_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.sp_for_switch_flag", sp_for_switch_flag, 0x33, 0x1, true, 0x92d43e03475df550, 1, uint16_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_H264_MVC.chroma_format_idc", chroma_format_idc, 0x34, 0x2, true, 0x21c57dc4585743e9, 2, uint16_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.RefPicFlag", ref_pic_flag, 0x36, 0x1, true, 0x312535fc40e518d5, 1, uint16_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.constrained_intra_pred_flag", constrained_intra_pred_flag, 0x37, 0x1, true, 0x5201dc58c60739e9, 1, uint16_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.weighted_pred_flag", weighted_pred_flag, 0x38, 0x1, true, 0xb938edb2305f2da8, 1, uint16_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_H264_MVC.weighted_bipred_idc", weighted_bipred_idc, 0x39, 0x2, true, 0xf728c8c0648b02e0, 2, uint16_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.MbsConsecutiveFlag", mbs_consecutive_flag, 0x3b, 0x1, true, 0x887363d63cd87a4, 1, uint16_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.frame_mbs_only_flag", frame_mbs_only_flag, 0x3c, 0x1, true, 0x1afa8729a8883d9b, 1, uint16_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.transform_8x8_mode_flag", transform_8x8_mode_flag, 0x3d, 0x1, true, 0x60c51b7e6505a387, 1, uint16_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.MinLumaBipredSize8x8Flag", min_luma_bipred_size8x8_flag, 0x3e, 0x1, true, 0x622f852ddee3a0bc, 1, uint16_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264_MVC.IntraPicFlag", intra_pic_flag, 0x3f, 0x1, true, 0x818f5b045ba88f45, 1, uint16_t)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.wBitFields", w_bit_fields, 0x30, 0x10, true, 0xc40f3a4c54f058e)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.bit_depth_luma_minus8", bit_depth_luma_minus8, 0x40, 0x8, true, 0xc4ca175930bfa977)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.bit_depth_chroma_minus8", bit_depth_chroma_minus8, 0x48, 0x8, true, 0x2590db72a9cdb08e)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.Reserved16Bits", reserved16_bits, 0x50, 0x10, true, 0x4e44972396681919)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_H264_MVC.StatusReportFeedbackNumber", status_report_feedback_number, 0x60, 0x20, true, 0x5420b005bdb6d702)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::pic_entry_h264_t, 16>), "_DXVA_PicParams_H264_MVC.RefFrameList", ref_frame_list, 0x80, 0x80, true, 0xded877077e5fb88c)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 2>), "_DXVA_PicParams_H264_MVC.CurrFieldOrderCnt", curr_field_order_cnt, 0x100, 0x40, true, 0x93264f108808254e)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<int32_t, 2>, 16>), "_DXVA_PicParams_H264_MVC.FieldOrderCntList", field_order_cnt_list, 0x140, 0x0, true, 0x814d045ff565b7e3)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264_MVC.pic_init_qs_minus26", pic_init_qs_minus26, 0x540, 0x8, true, 0x6a4311fdaf12553b)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264_MVC.chroma_qp_index_offset", chroma_qp_index_offset, 0x548, 0x8, true, 0xbb67f19eb8ac227a)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264_MVC.second_chroma_qp_index_offset", second_chroma_qp_index_offset, 0x550, 0x8, true, 0x8da37c00b998cb34)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.ContinuationFlag", continuation_flag, 0x558, 0x8, true, 0x2a95c6254242d27d)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264_MVC.pic_init_qp_minus26", pic_init_qp_minus26, 0x560, 0x8, true, 0x8b58b46f2ac8015e)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.num_ref_idx_l0_active_minus1", num_ref_idx_l0_active_minus1, 0x568, 0x8, true, 0xd3d455e5822ae57d)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.num_ref_idx_l1_active_minus1", num_ref_idx_l1_active_minus1, 0x570, 0x8, true, 0x82507fc25190e7cb)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.Reserved8BitsA", reserved8_bits_a, 0x578, 0x8, true, 0xba07093f138a9d6a)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_DXVA_PicParams_H264_MVC.FrameNumList", frame_num_list, 0x580, 0x0, true, 0x85ecd133489aeb9c)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_H264_MVC.UsedForReferenceFlags", used_for_reference_flags, 0x680, 0x20, true, 0xb5cfc00e4b107ff)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.NonExistingFrameFlags", non_existing_frame_flags, 0x6a0, 0x10, true, 0x9b3d38a08f023d3f)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.frame_num", frame_num, 0x6b0, 0x10, true, 0xb3d90c6c1e4259f1)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.log2_max_frame_num_minus4", log2_max_frame_num_minus4, 0x6c0, 0x8, true, 0x8e12c36546500ddc)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.pic_order_cnt_type", pic_order_cnt_type, 0x6c8, 0x8, true, 0x63ca7a9537831d60)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.log2_max_pic_order_cnt_lsb_minus4", log2_max_pic_order_cnt_lsb_minus4, 0x6d0, 0x8, true, 0xb5fd78399c394474)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.delta_pic_order_always_zero_flag", delta_pic_order_always_zero_flag, 0x6d8, 0x8, true, 0x6ba25aa9e2e7f207)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.direct_8x8_inference_flag", direct_8x8_inference_flag, 0x6e0, 0x8, true, 0x50ee08393193ec9b)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.entropy_coding_mode_flag", entropy_coding_mode_flag, 0x6e8, 0x8, true, 0x5d3f839194d7492)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.pic_order_present_flag", pic_order_present_flag, 0x6f0, 0x8, true, 0xc6e7ecbca163f20)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.num_slice_groups_minus1", num_slice_groups_minus1, 0x6f8, 0x8, true, 0x978e812af1feac2c)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.slice_group_map_type", slice_group_map_type, 0x700, 0x8, true, 0x7ccc61377408b5a8)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.deblocking_filter_control_present_flag", deblocking_filter_control_present_flag, 0x708, 0x8, true, 0x46d09be6cb6891ca)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.redundant_pic_cnt_present_flag", redundant_pic_cnt_present_flag, 0x710, 0x8, true, 0xf62f00e2a14fd5ab)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.Reserved8BitsB", reserved8_bits_b, 0x718, 0x8, true, 0x470563e1c2a79402)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.slice_group_change_rate_minus1", slice_group_change_rate_minus1, 0x720, 0x10, true, 0x7a19c109bf79289f)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.num_views_minus1", num_views_minus1, 0x730, 0x8, true, 0xc87721b4e933e71e)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_DXVA_PicParams_H264_MVC.view_id", view_id, 0x738, 0x0, true, 0x3995a1d442c78663)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXVA_PicParams_H264_MVC.num_anchor_refs_l0", num_anchor_refs_l0, 0x838, 0x80, true, 0x28b0f6466a3aab45)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint16_t, 16>, 16>), "_DXVA_PicParams_H264_MVC.anchor_ref_l0", anchor_ref_l0, 0x8b8, 0x0, true, 0x2f80814d1f7cf662)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXVA_PicParams_H264_MVC.num_anchor_refs_l1", num_anchor_refs_l1, 0x18b8, 0x80, true, 0x9dbe6889ec9007a5)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint16_t, 16>, 16>), "_DXVA_PicParams_H264_MVC.anchor_ref_l1", anchor_ref_l1, 0x1938, 0x0, true, 0xc60328cab88f13bc)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXVA_PicParams_H264_MVC.num_non_anchor_refs_l0", num_non_anchor_refs_l0, 0x2938, 0x80, true, 0x64dcb7d2ff3af730)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint16_t, 16>, 16>), "_DXVA_PicParams_H264_MVC.non_anchor_ref_l0", non_anchor_ref_l0, 0x29b8, 0x0, true, 0x8fa0a7c09ed74c00)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXVA_PicParams_H264_MVC.num_non_anchor_refs_l1", num_non_anchor_refs_l1, 0x39b8, 0x80, true, 0x65a8cf1702a47ab2)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint16_t, 16>, 16>), "_DXVA_PicParams_H264_MVC.non_anchor_ref_l1", non_anchor_ref_l1, 0x3a38, 0x0, true, 0x1ea0d37606ae1c5f)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264_MVC.curr_view_id", curr_view_id, 0x4a38, 0x10, true, 0x960b272a13348995)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.anchor_pic_flag", anchor_pic_flag, 0x4a48, 0x8, true, 0x1c8f7debd4119b7f)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264_MVC.inter_view_flag", inter_view_flag, 0x4a50, 0x8, true, 0x23ede80ce0e089a8)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_DXVA_PicParams_H264_MVC.ViewIDList", view_id_list, 0x4a58, 0x0, true, 0x2027a6525fa27bde)
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
#endif