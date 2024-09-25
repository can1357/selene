#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_h264_t.hpp"

#include "magic/pic_params_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicParams_H264]
    // => WDK 10 (NV)
    //
    struct pic_params_h264_t                                                                       
    {                                                                                              
        // WDK 10                                                                                  
        //                                                                                         
        _m000 uint16_t                                      w_frame_width_in_mbs_minus1;             //{ +0x0000    } | .wFrameWidthInMbsMinus1
        _m001 uint16_t                                      w_frame_height_in_mbs_minus1;            //{ +0x0002    } | .wFrameHeightInMbsMinus1
        _m002 struct dxva::pic_entry_h264_t                 curr_pic;                                //{ +0x0004    } | .CurrPic
        _m003 uint8_t                                       num_ref_frames;                          //{ +0x0005    } | .num_ref_frames
        _m004 uint1_t                                       field_pic_flag;                          //{ +0x0006@0  } | .field_pic_flag
        _m005 uint1_t                                       mbaff_frame_flag;                        //{ +0x0006@1  } | .MbaffFrameFlag
        _m006 uint1_t                                       residual_colour_transform_flag;          //{ +0x0006@2  } | .residual_colour_transform_flag
        _m007 uint1_t                                       sp_for_switch_flag;                      //{ +0x0006@3  } | .sp_for_switch_flag
        _m008 uint2_t                                       chroma_format_idc;                       //{ +0x0006@4  } | .chroma_format_idc
        _m009 uint1_t                                       ref_pic_flag;                            //{ +0x0006@6  } | .RefPicFlag
        _m010 uint1_t                                       constrained_intra_pred_flag;             //{ +0x0006@7  } | .constrained_intra_pred_flag
        _m011 uint1_t                                       weighted_pred_flag;                      //{ +0x0006@8  } | .weighted_pred_flag
        _m012 uint2_t                                       weighted_bipred_idc;                     //{ +0x0006@9  } | .weighted_bipred_idc
        _m013 uint1_t                                       mbs_consecutive_flag;                    //{ +0x0006@11 } | .MbsConsecutiveFlag
        _m014 uint1_t                                       frame_mbs_only_flag;                     //{ +0x0006@12 } | .frame_mbs_only_flag
        _m015 uint1_t                                       transform_8x8_mode_flag;                 //{ +0x0006@13 } | .transform_8x8_mode_flag
        _m016 uint1_t                                       min_luma_bipred_size8x8_flag;            //{ +0x0006@14 } | .MinLumaBipredSize8x8Flag
        _m017 uint1_t                                       intra_pic_flag;                          //{ +0x0006@15 } | .IntraPicFlag
        _m018 uint16_t                                      w_bit_fields;                            //{ +0x0006    } | .wBitFields
        _m019 uint8_t                                       bit_depth_luma_minus8;                   //{ +0x0008    } | .bit_depth_luma_minus8
        _m020 uint8_t                                       bit_depth_chroma_minus8;                 //{ +0x0009    } | .bit_depth_chroma_minus8
        _m021 uint16_t                                      reserved16_bits;                         //{ +0x000a    } | .Reserved16Bits
        _m022 uint32_t                                      status_report_feedback_number;           //{ +0x000c    } | .StatusReportFeedbackNumber
        _m023 sdk::array<struct dxva::pic_entry_h264_t, 16> ref_frame_list;                          //{ +0x0010    } | .RefFrameList
        _m024 sdk::array<int32_t, 2>                        curr_field_order_cnt;                    //{ +0x0020    } | .CurrFieldOrderCnt
        _m025 sdk::array<sdk::array<int32_t, 2>, 16>        field_order_cnt_list;                    //{ +0x0028    } | .FieldOrderCntList
        _m026 char                                          pic_init_qs_minus26;                     //{ +0x00a8    } | .pic_init_qs_minus26
        _m027 char                                          chroma_qp_index_offset;                  //{ +0x00a9    } | .chroma_qp_index_offset
        _m028 char                                          second_chroma_qp_index_offset;           //{ +0x00aa    } | .second_chroma_qp_index_offset
        _m029 uint8_t                                       continuation_flag;                       //{ +0x00ab    } | .ContinuationFlag
        _m030 char                                          pic_init_qp_minus26;                     //{ +0x00ac    } | .pic_init_qp_minus26
        _m031 uint8_t                                       num_ref_idx_l0_active_minus1;            //{ +0x00ad    } | .num_ref_idx_l0_active_minus1
        _m032 uint8_t                                       num_ref_idx_l1_active_minus1;            //{ +0x00ae    } | .num_ref_idx_l1_active_minus1
        _m033 uint8_t                                       reserved8_bits_a;                        //{ +0x00af    } | .Reserved8BitsA
        _m034 sdk::array<uint16_t, 16>                      frame_num_list;                          //{ +0x00b0    } | .FrameNumList
        _m035 uint32_t                                      used_for_reference_flags;                //{ +0x00d0    } | .UsedForReferenceFlags
        _m036 uint16_t                                      non_existing_frame_flags;                //{ +0x00d4    } | .NonExistingFrameFlags
        _m037 uint16_t                                      frame_num;                               //{ +0x00d6    } | .frame_num
        _m038 uint8_t                                       log2_max_frame_num_minus4;               //{ +0x00d8    } | .log2_max_frame_num_minus4
        _m039 uint8_t                                       pic_order_cnt_type;                      //{ +0x00d9    } | .pic_order_cnt_type
        _m040 uint8_t                                       log2_max_pic_order_cnt_lsb_minus4;       //{ +0x00da    } | .log2_max_pic_order_cnt_lsb_minus4
        _m041 uint8_t                                       delta_pic_order_always_zero_flag;        //{ +0x00db    } | .delta_pic_order_always_zero_flag
        _m042 uint8_t                                       direct_8x8_inference_flag;               //{ +0x00dc    } | .direct_8x8_inference_flag
        _m043 uint8_t                                       entropy_coding_mode_flag;                //{ +0x00dd    } | .entropy_coding_mode_flag
        _m044 uint8_t                                       pic_order_present_flag;                  //{ +0x00de    } | .pic_order_present_flag
        _m045 uint8_t                                       num_slice_groups_minus1;                 //{ +0x00df    } | .num_slice_groups_minus1
        _m046 uint8_t                                       slice_group_map_type;                    //{ +0x00e0    } | .slice_group_map_type
        _m047 uint8_t                                       deblocking_filter_control_present_flag;  //{ +0x00e1    } | .deblocking_filter_control_present_flag
        _m048 uint8_t                                       redundant_pic_cnt_present_flag;          //{ +0x00e2    } | .redundant_pic_cnt_present_flag
        _m049 uint8_t                                       reserved8_bits_b;                        //{ +0x00e3    } | .Reserved8BitsB
        _m050 uint16_t                                      slice_group_change_rate_minus1;          //{ +0x00e4    } | .slice_group_change_rate_minus1
        _m051 sdk::array<uint8_t, 810>                      slice_group_map;                         //{ +0x00e6    } | .SliceGroupMap
                                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXVA_PicParams_H264.$", 0x0, false, 0x68e9e375ed86ee8a );                                       
        SDK_FIXED_SIZE( pic_params_h264_t, 0x410 );                                                
    };                                                                                             
};
#include "magic/pic_params_h264_t.end.hpp"
SDK_VERIFY( struct dxva::pic_params_h264_t, 0x410 );
