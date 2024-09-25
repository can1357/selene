#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_H264_Long.BSNALunitDataLocation", bsna_lunit_data_location, 0x0, 0x20, true, 0xbdbf9ed2a85a5c50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_H264_Long.SliceBytesInBuffer", slice_bytes_in_buffer, 0x20, 0x20, true, 0xa2db431621d55a2b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Long.wBadSliceChopping", w_bad_slice_chopping, 0x40, 0x10, true, 0xd86299ae97c5d135)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Long.first_mb_in_slice", first_mb_in_slice, 0x50, 0x10, true, 0x240ad12e9d9532d0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Long.NumMbsForSlice", num_mbs_for_slice, 0x60, 0x10, true, 0x94fbe0b736684d18)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Long.BitOffsetToSliceData", bit_offset_to_slice_data, 0x70, 0x10, true, 0x9eb6cbdc7a33f70f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.slice_type", slice_type, 0x80, 0x8, true, 0x65ca3f42ebcc677e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.luma_log2_weight_denom", luma_log2_weight_denom, 0x88, 0x8, true, 0xb7392ee72ca15bd8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.chroma_log2_weight_denom", chroma_log2_weight_denom, 0x90, 0x8, true, 0x5e807b5238f693a0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.num_ref_idx_l0_active_minus1", num_ref_idx_l0_active_minus1, 0x98, 0x8, true, 0xd70746979467ad41)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.num_ref_idx_l1_active_minus1", num_ref_idx_l1_active_minus1, 0xa0, 0x8, true, 0x1d73dd65d9c7cfe8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_Slice_H264_Long.slice_alpha_c0_offset_div2", slice_alpha_c0_offset_div2, 0xa8, 0x8, true, 0xd9bee87f6a5b81d7)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_Slice_H264_Long.slice_beta_offset_div2", slice_beta_offset_div2, 0xb0, 0x8, true, 0xe4b240162e4d4e82)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.Reserved8Bits", reserved8_bits, 0xb8, 0x8, true, 0xde9e23a31bdd8d38)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<struct dxva::pic_entry_h264_t, 32>, 2>), "_DXVA_Slice_H264_Long.RefPicList", ref_pic_list, 0xc0, 0x0, true, 0xcfe78f185b771c93)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<int16_t, 2>, 3>, 32>, 2>), "_DXVA_Slice_H264_Long.Weights", weights, 0x2c0, 0x0, true, 0xfa254b117602e958)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_Slice_H264_Long.slice_qs_delta", slice_qs_delta, 0x1ac0, 0x8, true, 0x59b15e6122a9aa7c)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_Slice_H264_Long.slice_qp_delta", slice_qp_delta, 0x1ac8, 0x8, true, 0xd9cb920c51769852)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.redundant_pic_cnt", redundant_pic_cnt, 0x1ad0, 0x8, true, 0x9684c2054e8b7f1e)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.direct_spatial_mv_pred_flag", direct_spatial_mv_pred_flag, 0x1ad8, 0x8, true, 0x6adf16ac655d17c5)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.cabac_init_idc", cabac_init_idc, 0x1ae0, 0x8, true, 0xbe454a1369b035d6)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Slice_H264_Long.disable_deblocking_filter_idc", disable_deblocking_filter_idc, 0x1ae8, 0x8, true, 0x64bca6ce2809d204)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Long.slice_id", slice_id, 0x1af0, 0x10, true, 0xaccd2553b4377c20)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif