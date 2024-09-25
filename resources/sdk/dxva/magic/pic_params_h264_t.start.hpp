#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.wFrameWidthInMbsMinus1", w_frame_width_in_mbs_minus1, 0x0, 0x10, true, 0x95727a8768d2856b)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.wFrameHeightInMbsMinus1", w_frame_height_in_mbs_minus1, 0x10, 0x10, true, 0x7890c5e60f7f5fe1)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_h264_t), "_DXVA_PicParams_H264.CurrPic", curr_pic, 0x20, 0x8, true, 0xaf8cf4dd7ec8f6ae)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.num_ref_frames", num_ref_frames, 0x28, 0x8, true, 0x797eb9eff3f787d0)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.field_pic_flag", field_pic_flag, 0x30, 0x1, true, 0xf959a67cbc218bd6, 1, uint16_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.MbaffFrameFlag", mbaff_frame_flag, 0x31, 0x1, true, 0xe9e1631b084cee4d, 1, uint16_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.residual_colour_transform_flag", residual_colour_transform_flag, 0x32, 0x1, true, 0xca7da0b23e96bfb7, 1, uint16_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.sp_for_switch_flag", sp_for_switch_flag, 0x33, 0x1, true, 0xadf7ce6b126e2d75, 1, uint16_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_H264.chroma_format_idc", chroma_format_idc, 0x34, 0x2, true, 0xad8cc622a320cc7b, 2, uint16_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.RefPicFlag", ref_pic_flag, 0x36, 0x1, true, 0x8b865083a533889a, 1, uint16_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.constrained_intra_pred_flag", constrained_intra_pred_flag, 0x37, 0x1, true, 0x327d9e835c3f75f5, 1, uint16_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.weighted_pred_flag", weighted_pred_flag, 0x38, 0x1, true, 0x9554ecbda2218eb6, 1, uint16_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_H264.weighted_bipred_idc", weighted_bipred_idc, 0x39, 0x2, true, 0xbd61f183009d412c, 2, uint16_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.MbsConsecutiveFlag", mbs_consecutive_flag, 0x3b, 0x1, true, 0xc07a166a9ed368e0, 1, uint16_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.frame_mbs_only_flag", frame_mbs_only_flag, 0x3c, 0x1, true, 0x9b528a66fbac523b, 1, uint16_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.transform_8x8_mode_flag", transform_8x8_mode_flag, 0x3d, 0x1, true, 0xc7ba23b52109c6b2, 1, uint16_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.MinLumaBipredSize8x8Flag", min_luma_bipred_size8x8_flag, 0x3e, 0x1, true, 0xf89b062db0b488b8, 1, uint16_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_H264.IntraPicFlag", intra_pic_flag, 0x3f, 0x1, true, 0x57ff4793304eb026, 1, uint16_t)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.wBitFields", w_bit_fields, 0x30, 0x10, true, 0x157d644ec55e7c7a)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.bit_depth_luma_minus8", bit_depth_luma_minus8, 0x40, 0x8, true, 0x6f81be638abd4007)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.bit_depth_chroma_minus8", bit_depth_chroma_minus8, 0x48, 0x8, true, 0xfbfec1356a4d7e86)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.Reserved16Bits", reserved16_bits, 0x50, 0x10, true, 0x8f1fada439f2b892)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_H264.StatusReportFeedbackNumber", status_report_feedback_number, 0x60, 0x20, true, 0xaac0a14d640a1e8)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::pic_entry_h264_t, 16>), "_DXVA_PicParams_H264.RefFrameList", ref_frame_list, 0x80, 0x80, true, 0x2f7a6f28ad9678f0)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 2>), "_DXVA_PicParams_H264.CurrFieldOrderCnt", curr_field_order_cnt, 0x100, 0x40, true, 0x945317c7abf88412)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<int32_t, 2>, 16>), "_DXVA_PicParams_H264.FieldOrderCntList", field_order_cnt_list, 0x140, 0x0, true, 0xd273b6cb76a21729)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264.pic_init_qs_minus26", pic_init_qs_minus26, 0x540, 0x8, true, 0x78c8df380d8faf64)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264.chroma_qp_index_offset", chroma_qp_index_offset, 0x548, 0x8, true, 0xa872a85c6fa261d4)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264.second_chroma_qp_index_offset", second_chroma_qp_index_offset, 0x550, 0x8, true, 0x46f55e20bf38d9d2)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.ContinuationFlag", continuation_flag, 0x558, 0x8, true, 0x5e2cb516f061b383)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_H264.pic_init_qp_minus26", pic_init_qp_minus26, 0x560, 0x8, true, 0x620cb93ccb270f2f)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.num_ref_idx_l0_active_minus1", num_ref_idx_l0_active_minus1, 0x568, 0x8, true, 0x7edfb70204741ed1)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.num_ref_idx_l1_active_minus1", num_ref_idx_l1_active_minus1, 0x570, 0x8, true, 0xf7a17c38fcee2d83)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.Reserved8BitsA", reserved8_bits_a, 0x578, 0x8, true, 0xc3b0e11a29a5b60)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16>), "_DXVA_PicParams_H264.FrameNumList", frame_num_list, 0x580, 0x0, true, 0x2e677401a86e8bd5)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_H264.UsedForReferenceFlags", used_for_reference_flags, 0x680, 0x20, true, 0xf3a6edd5d67de71b)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.NonExistingFrameFlags", non_existing_frame_flags, 0x6a0, 0x10, true, 0xa255551a1112791)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.frame_num", frame_num, 0x6b0, 0x10, true, 0xd7e880be7da8fa5c)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.log2_max_frame_num_minus4", log2_max_frame_num_minus4, 0x6c0, 0x8, true, 0x74980d38583b6725)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.pic_order_cnt_type", pic_order_cnt_type, 0x6c8, 0x8, true, 0x18bdd3b939e43184)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.log2_max_pic_order_cnt_lsb_minus4", log2_max_pic_order_cnt_lsb_minus4, 0x6d0, 0x8, true, 0xea89481a6f4e6b0b)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.delta_pic_order_always_zero_flag", delta_pic_order_always_zero_flag, 0x6d8, 0x8, true, 0xa069adbbf068a95a)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.direct_8x8_inference_flag", direct_8x8_inference_flag, 0x6e0, 0x8, true, 0x97d074a9b2ff9559)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.entropy_coding_mode_flag", entropy_coding_mode_flag, 0x6e8, 0x8, true, 0x6bff7db0cb5f0ae4)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.pic_order_present_flag", pic_order_present_flag, 0x6f0, 0x8, true, 0xdc266631b1510cb4)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.num_slice_groups_minus1", num_slice_groups_minus1, 0x6f8, 0x8, true, 0x996d70cd5564daba)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.slice_group_map_type", slice_group_map_type, 0x700, 0x8, true, 0x9fcba1a5e41ae321)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.deblocking_filter_control_present_flag", deblocking_filter_control_present_flag, 0x708, 0x8, true, 0x760791c3bb96f9e1)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.redundant_pic_cnt_present_flag", redundant_pic_cnt_present_flag, 0x710, 0x8, true, 0xdb56973c58d99832)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_H264.Reserved8BitsB", reserved8_bits_b, 0x718, 0x8, true, 0xe6511cbdb9144432)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_H264.slice_group_change_rate_minus1", slice_group_change_rate_minus1, 0x720, 0x10, true, 0x131326d82c670321)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 810>), "_DXVA_PicParams_H264.SliceGroupMap", slice_group_map, 0x730, 0x50, true, 0x3da4d7cf78d01153)
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
#endif