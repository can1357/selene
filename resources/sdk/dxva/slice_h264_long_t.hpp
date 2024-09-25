#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_h264_t.hpp"

#include "magic/slice_h264_long_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Slice_H264_Long]
    // => WDK 10 (NV)
    //
    struct slice_h264_long_t                               
    {                                                      
        using ref_pic_list_t = sdk::array<sdk::array<struct dxva::pic_entry_h264_t, 32>, 2>;                              
        using weights_t =      sdk::array<sdk::array<sdk::array<sdk::array<int16_t, 2>, 3>, 32>, 2>;                              
                                                           
        // WDK 10                                          
        //                                                 
        _m00 uint32_t        bsna_lunit_data_location;       //{ +0x0000    } | .BSNALunitDataLocation
        _m01 uint32_t        slice_bytes_in_buffer;          //{ +0x0004    } | .SliceBytesInBuffer
        _m02 uint16_t        w_bad_slice_chopping;           //{ +0x0008    } | .wBadSliceChopping
        _m03 uint16_t        first_mb_in_slice;              //{ +0x000a    } | .first_mb_in_slice
        _m04 uint16_t        num_mbs_for_slice;              //{ +0x000c    } | .NumMbsForSlice
        _m05 uint16_t        bit_offset_to_slice_data;       //{ +0x000e    } | .BitOffsetToSliceData
        _m06 uint8_t         slice_type;                     //{ +0x0010    } | .slice_type
        _m07 uint8_t         luma_log2_weight_denom;         //{ +0x0011    } | .luma_log2_weight_denom
        _m08 uint8_t         chroma_log2_weight_denom;       //{ +0x0012    } | .chroma_log2_weight_denom
        _m09 uint8_t         num_ref_idx_l0_active_minus1;   //{ +0x0013    } | .num_ref_idx_l0_active_minus1
        _m10 uint8_t         num_ref_idx_l1_active_minus1;   //{ +0x0014    } | .num_ref_idx_l1_active_minus1
        _m11 char            slice_alpha_c0_offset_div2;     //{ +0x0015    } | .slice_alpha_c0_offset_div2
        _m12 char            slice_beta_offset_div2;         //{ +0x0016    } | .slice_beta_offset_div2
        _m13 uint8_t         reserved8_bits;                 //{ +0x0017    } | .Reserved8Bits
        _m14 ref_pic_list_t  ref_pic_list;                   //{ +0x0018    } | .RefPicList
        _m15 weights_t       weights;                        //{ +0x0058    } | .Weights
        _m16 char            slice_qs_delta;                 //{ +0x0358    } | .slice_qs_delta
        _m17 char            slice_qp_delta;                 //{ +0x0359    } | .slice_qp_delta
        _m18 uint8_t         redundant_pic_cnt;              //{ +0x035a    } | .redundant_pic_cnt
        _m19 uint8_t         direct_spatial_mv_pred_flag;    //{ +0x035b    } | .direct_spatial_mv_pred_flag
        _m20 uint8_t         cabac_init_idc;                 //{ +0x035c    } | .cabac_init_idc
        _m21 uint8_t         disable_deblocking_filter_idc;  //{ +0x035d    } | .disable_deblocking_filter_idc
        _m22 uint16_t        slice_id;                       //{ +0x035e    } | .slice_id
                                                           
        SDK_NONVOL_PROPERTIES( "_DXVA_Slice_H264_Long.$", 0x0, false, 0x76658229322da373 );                              
        SDK_FIXED_SIZE( slice_h264_long_t, 0x360 );                              
    };                                                     
};
#include "magic/slice_h264_long_t.end.hpp"
SDK_VERIFY( struct dxva::slice_h264_long_t, 0x360 );
