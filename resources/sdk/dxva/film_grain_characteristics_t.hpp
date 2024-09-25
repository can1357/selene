#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_h264_t.hpp"

#include "magic/film_grain_characteristics_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_FilmGrainCharacteristics]
    // => WDK 10 (NV)
    //
    struct film_grain_characteristics_t                                                      
    {                                                                                        
        using comp_model_value_t = sdk::array<sdk::array<sdk::array<int16_t, 8>, 16>, 3>;                                         
                                                                                             
        // WDK 10                                                                            
        //                                                                                   
        _m00 uint16_t                               w_frame_width_in_mbs_minus1;               //{ +0x0000    } | .wFrameWidthInMbsMinus1
        _m01 uint16_t                               w_frame_height_in_mbs_minus1;              //{ +0x0002    } | .wFrameHeightInMbsMinus1
        _m02 struct dxva::pic_entry_h264_t          in_pic;                                    //{ +0x0004    } | .InPic
        _m03 struct dxva::pic_entry_h264_t          out_pic;                                   //{ +0x0005    } | .OutPic
        _m04 uint16_t                               pic_order_cnt_offset;                      //{ +0x0006    } | .PicOrderCnt_offset
        _m05 int32_t                                curr_pic_order_cnt;                        //{ +0x0008    } | .CurrPicOrderCnt
        _m06 uint32_t                               status_report_feedback_number;             //{ +0x000c    } | .StatusReportFeedbackNumber
        _m07 uint8_t                                model_id;                                  //{ +0x0010    } | .model_id
        _m08 uint8_t                                separate_colour_description_present_flag;  //{ +0x0011    } | .separate_colour_description_present_flag
        _m09 uint8_t                                film_grain_bit_depth_luma_minus8;          //{ +0x0012    } | .film_grain_bit_depth_luma_minus8
        _m10 uint8_t                                film_grain_bit_depth_chroma_minus8;        //{ +0x0013    } | .film_grain_bit_depth_chroma_minus8
        _m11 uint8_t                                film_grain_full_range_flag;                //{ +0x0014    } | .film_grain_full_range_flag
        _m12 uint8_t                                film_grain_colour_primaries;               //{ +0x0015    } | .film_grain_colour_primaries
        _m13 uint8_t                                film_grain_transfer_characteristics;       //{ +0x0016    } | .film_grain_transfer_characteristics
        _m14 uint8_t                                film_grain_matrix_coefficients;            //{ +0x0017    } | .film_grain_matrix_coefficients
        _m15 uint8_t                                blending_mode_id;                          //{ +0x0018    } | .blending_mode_id
        _m16 uint8_t                                log2_scale_factor;                         //{ +0x0019    } | .log2_scale_factor
        _m17 sdk::array<uint8_t, 4>                 comp_model_present_flag;                   //{ +0x001a    } | .comp_model_present_flag
        _m18 sdk::array<uint8_t, 4>                 num_intensity_intervals_minus1;            //{ +0x001e    } | .num_intensity_intervals_minus1
        _m19 sdk::array<uint8_t, 4>                 num_model_values_minus1;                   //{ +0x0022    } | .num_model_values_minus1
        _m20 sdk::array<sdk::array<uint8_t, 16>, 3> intensity_interval_lower_bound;            //{ +0x0026    } | .intensity_interval_lower_bound
        _m21 sdk::array<sdk::array<uint8_t, 16>, 3> intensity_interval_upper_bound;            //{ +0x0056    } | .intensity_interval_upper_bound
        _m22 comp_model_value_t                     comp_model_value;                          //{ +0x0086    } | .comp_model_value
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXVA_FilmGrainCharacteristics.$", 0x0, false, 0x190d040d27295055 );                                         
        SDK_FIXED_SIZE( film_grain_characteristics_t, 0x386 );                                         
    };                                                                                       
};
#include "magic/film_grain_characteristics_t.end.hpp"
SDK_VERIFY( struct dxva::film_grain_characteristics_t, 0x386 );
