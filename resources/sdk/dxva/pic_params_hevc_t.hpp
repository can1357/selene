#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_hevc_t.hpp"

#include "magic/pic_params_hevc_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicParams_HEVC]
    // => WDK 10 (NV)
    //
    struct pic_params_hevc_t                                                                             
    {                                                                                                    
        // WDK 10                                                                                        
        //                                                                                               
        _m000 uint16_t                                      pic_width_in_min_cbs_y;                        //{ +0x0000    } | .PicWidthInMinCbsY
        _m001 uint16_t                                      pic_height_in_min_cbs_y;                       //{ +0x0002    } | .PicHeightInMinCbsY
        _m002 uint2_t                                       chroma_format_idc;                             //{ +0x0004@0  } | .chroma_format_idc
        _m003 uint1_t                                       separate_colour_plane_flag;                    //{ +0x0004@2  } | .separate_colour_plane_flag
        _m004 uint3_t                                       bit_depth_luma_minus8;                         //{ +0x0004@3  } | .bit_depth_luma_minus8
        _m005 uint3_t                                       bit_depth_chroma_minus8;                       //{ +0x0004@6  } | .bit_depth_chroma_minus8
        _m006 uint4_t                                       log2_max_pic_order_cnt_lsb_minus4;             //{ +0x0004@9  } | .log2_max_pic_order_cnt_lsb_minus4
        _m007 uint1_t                                       no_pic_reordering_flag;                        //{ +0x0004@13 } | .NoPicReorderingFlag
        _m008 uint1_t                                       no_bi_pred_flag;                               //{ +0x0004@14 } | .NoBiPredFlag
        _m009 uint16_t                                      w_format_and_sequence_info_flags;              //{ +0x0004    } | .wFormatAndSequenceInfoFlags
        _m010 struct dxva::pic_entry_hevc_t                 curr_pic;                                      //{ +0x0006    } | .CurrPic
        _m011 uint8_t                                       sps_max_dec_pic_buffering_minus1;              //{ +0x0007    } | .sps_max_dec_pic_buffering_minus1
        _m012 uint8_t                                       log2_min_luma_coding_block_size_minus3;        //{ +0x0008    } | .log2_min_luma_coding_block_size_minus3
        _m013 uint8_t                                       log2_diff_max_min_luma_coding_block_size;      //{ +0x0009    } | .log2_diff_max_min_luma_coding_block_size
        _m014 uint8_t                                       log2_min_transform_block_size_minus2;          //{ +0x000a    } | .log2_min_transform_block_size_minus2
        _m015 uint8_t                                       log2_diff_max_min_transform_block_size;        //{ +0x000b    } | .log2_diff_max_min_transform_block_size
        _m016 uint8_t                                       max_transform_hierarchy_depth_inter;           //{ +0x000c    } | .max_transform_hierarchy_depth_inter
        _m017 uint8_t                                       max_transform_hierarchy_depth_intra;           //{ +0x000d    } | .max_transform_hierarchy_depth_intra
        _m018 uint8_t                                       num_short_term_ref_pic_sets;                   //{ +0x000e    } | .num_short_term_ref_pic_sets
        _m019 uint8_t                                       num_long_term_ref_pics_sps;                    //{ +0x000f    } | .num_long_term_ref_pics_sps
        _m020 uint8_t                                       num_ref_idx_l0_default_active_minus1;          //{ +0x0010    } | .num_ref_idx_l0_default_active_minus1
        _m021 uint8_t                                       num_ref_idx_l1_default_active_minus1;          //{ +0x0011    } | .num_ref_idx_l1_default_active_minus1
        _m022 char                                          init_qp_minus26;                               //{ +0x0012    } | .init_qp_minus26
        _m023 uint8_t                                       uc_num_delta_pocs_of_ref_rps_idx;              //{ +0x0013    } | .ucNumDeltaPocsOfRefRpsIdx
        _m024 uint16_t                                      w_num_bits_for_short_term_rps_in_slice;        //{ +0x0014    } | .wNumBitsForShortTermRPSInSlice
        _m025 uint1_t                                       scaling_list_enabled_flag;                     //{ +0x0018@0  } | .scaling_list_enabled_flag
        _m026 uint1_t                                       amp_enabled_flag;                              //{ +0x0018@1  } | .amp_enabled_flag
        _m027 uint1_t                                       sample_adaptive_offset_enabled_flag;           //{ +0x0018@2  } | .sample_adaptive_offset_enabled_flag
        _m028 uint1_t                                       pcm_enabled_flag;                              //{ +0x0018@3  } | .pcm_enabled_flag
        _m029 uint4_t                                       pcm_sample_bit_depth_luma_minus1;              //{ +0x0018@4  } | .pcm_sample_bit_depth_luma_minus1
        _m030 uint4_t                                       pcm_sample_bit_depth_chroma_minus1;            //{ +0x0018@8  } | .pcm_sample_bit_depth_chroma_minus1
        _m031 uint2_t                                       log2_min_pcm_luma_coding_block_size_minus3;    //{ +0x0018@12 } | .log2_min_pcm_luma_coding_block_size_minus3
        _m032 uint2_t                                       log2_diff_max_min_pcm_luma_coding_block_size;  //{ +0x0018@14 } | .log2_diff_max_min_pcm_luma_coding_block_size
        _m033 uint1_t                                       pcm_loop_filter_disabled_flag;                 //{ +0x0018@16 } | .pcm_loop_filter_disabled_flag
        _m034 uint1_t                                       long_term_ref_pics_present_flag;               //{ +0x0018@17 } | .long_term_ref_pics_present_flag
        _m035 uint1_t                                       sps_temporal_mvp_enabled_flag;                 //{ +0x0018@18 } | .sps_temporal_mvp_enabled_flag
        _m036 uint1_t                                       strong_intra_smoothing_enabled_flag;           //{ +0x0018@19 } | .strong_intra_smoothing_enabled_flag
        _m037 uint1_t                                       dependent_slice_segments_enabled_flag;         //{ +0x0018@20 } | .dependent_slice_segments_enabled_flag
        _m038 uint1_t                                       output_flag_present_flag;                      //{ +0x0018@21 } | .output_flag_present_flag
        _m039 uint3_t                                       num_extra_slice_header_bits;                   //{ +0x0018@22 } | .num_extra_slice_header_bits
        _m040 uint1_t                                       sign_data_hiding_enabled_flag;                 //{ +0x0018@25 } | .sign_data_hiding_enabled_flag
        _m041 uint1_t                                       cabac_init_present_flag;                       //{ +0x0018@26 } | .cabac_init_present_flag
        _m042 uint32_t                                      dw_coding_param_tool_flags;                    //{ +0x0018    } | .dwCodingParamToolFlags
        _m043 uint1_t                                       constrained_intra_pred_flag;                   //{ +0x001c@0  } | .constrained_intra_pred_flag
        _m044 uint1_t                                       transform_skip_enabled_flag;                   //{ +0x001c@1  } | .transform_skip_enabled_flag
        _m045 uint1_t                                       cu_qp_delta_enabled_flag;                      //{ +0x001c@2  } | .cu_qp_delta_enabled_flag
        _m046 uint1_t                                       pps_slice_chroma_qp_offsets_present_flag;      //{ +0x001c@3  } | .pps_slice_chroma_qp_offsets_present_flag
        _m047 uint1_t                                       weighted_pred_flag;                            //{ +0x001c@4  } | .weighted_pred_flag
        _m048 uint1_t                                       weighted_bipred_flag;                          //{ +0x001c@5  } | .weighted_bipred_flag
        _m049 uint1_t                                       transquant_bypass_enabled_flag;                //{ +0x001c@6  } | .transquant_bypass_enabled_flag
        _m050 uint1_t                                       tiles_enabled_flag;                            //{ +0x001c@7  } | .tiles_enabled_flag
        _m051 uint1_t                                       entropy_coding_sync_enabled_flag;              //{ +0x001c@8  } | .entropy_coding_sync_enabled_flag
        _m052 uint1_t                                       uniform_spacing_flag;                          //{ +0x001c@9  } | .uniform_spacing_flag
        _m053 uint1_t                                       loop_filter_across_tiles_enabled_flag;         //{ +0x001c@10 } | .loop_filter_across_tiles_enabled_flag
        _m054 uint1_t                                       pps_loop_filter_across_slices_enabled_flag;    //{ +0x001c@11 } | .pps_loop_filter_across_slices_enabled_flag
        _m055 uint1_t                                       deblocking_filter_override_enabled_flag;       //{ +0x001c@12 } | .deblocking_filter_override_enabled_flag
        _m056 uint1_t                                       pps_deblocking_filter_disabled_flag;           //{ +0x001c@13 } | .pps_deblocking_filter_disabled_flag
        _m057 uint1_t                                       lists_modification_present_flag;               //{ +0x001c@14 } | .lists_modification_present_flag
        _m058 uint1_t                                       slice_segment_header_extension_present_flag;   //{ +0x001c@15 } | .slice_segment_header_extension_present_flag
        _m059 uint1_t                                       irap_pic_flag;                                 //{ +0x001c@16 } | .IrapPicFlag
        _m060 uint1_t                                       idr_pic_flag;                                  //{ +0x001c@17 } | .IdrPicFlag
        _m061 uint1_t                                       intra_pic_flag;                                //{ +0x001c@18 } | .IntraPicFlag
        _m062 uint32_t                                      dw_coding_setting_picture_property_flags;      //{ +0x001c    } | .dwCodingSettingPicturePropertyFlags
        _m063 char                                          pps_cb_qp_offset;                              //{ +0x0020    } | .pps_cb_qp_offset
        _m064 char                                          pps_cr_qp_offset;                              //{ +0x0021    } | .pps_cr_qp_offset
        _m065 uint8_t                                       num_tile_columns_minus1;                       //{ +0x0022    } | .num_tile_columns_minus1
        _m066 uint8_t                                       num_tile_rows_minus1;                          //{ +0x0023    } | .num_tile_rows_minus1
        _m067 sdk::array<uint16_t, 19>                      column_width_minus1;                           //{ +0x0024    } | .column_width_minus1
        _m068 sdk::array<uint16_t, 21>                      row_height_minus1;                             //{ +0x004a    } | .row_height_minus1
        _m069 uint8_t                                       diff_cu_qp_delta_depth;                        //{ +0x0074    } | .diff_cu_qp_delta_depth
        _m070 char                                          pps_beta_offset_div2;                          //{ +0x0075    } | .pps_beta_offset_div2
        _m071 char                                          pps_tc_offset_div2;                            //{ +0x0076    } | .pps_tc_offset_div2
        _m072 uint8_t                                       log2_parallel_merge_level_minus2;              //{ +0x0077    } | .log2_parallel_merge_level_minus2
        _m073 int32_t                                       curr_pic_order_cnt_val;                        //{ +0x0078    } | .CurrPicOrderCntVal
        _m074 sdk::array<struct dxva::pic_entry_hevc_t, 15> ref_pic_list;                                  //{ +0x007c    } | .RefPicList
        _m075 sdk::array<int32_t, 15>                       pic_order_cnt_val_list;                        //{ +0x008c    } | .PicOrderCntValList
        _m076 sdk::array<uint8_t, 8>                        ref_pic_set_st_curr_before;                    //{ +0x00c8    } | .RefPicSetStCurrBefore
        _m077 sdk::array<uint8_t, 8>                        ref_pic_set_st_curr_after;                     //{ +0x00d0    } | .RefPicSetStCurrAfter
        _m078 sdk::array<uint8_t, 8>                        ref_pic_set_lt_curr;                           //{ +0x00d8    } | .RefPicSetLtCurr
        _m079 uint32_t                                      status_report_feedback_number;                 //{ +0x00e4    } | .StatusReportFeedbackNumber
                                                                                                         
        SDK_NONVOL_PROPERTIES( "_DXVA_PicParams_HEVC.$", 0x0, false, 0x2f05eb7500b7dea0 );                                             
        SDK_FIXED_SIZE( pic_params_hevc_t, 0xe8 );                                                       
    };                                                                                                   
};
#include "magic/pic_params_hevc_t.end.hpp"
SDK_VERIFY( struct dxva::pic_params_hevc_t, 0xe8 );
