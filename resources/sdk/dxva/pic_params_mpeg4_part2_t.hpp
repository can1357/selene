#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pic_params_mpeg4_part2_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicParams_MPEG4_PART2]
    // => WDK 10 (NV)
    //
    struct pic_params_mpeg4_part2_t                                               
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m000 uint8_t                               short_video_header;             //{ +0x0000    } | .short_video_header
        _m001 uint8_t                               vop_coding_type;                //{ +0x0001    } | .vop_coding_type
        _m002 uint8_t                               vop_quant;                      //{ +0x0002    } | .vop_quant
        _m003 uint16_t                              w_decoded_picture_index;        //{ +0x0003    } | .wDecodedPictureIndex
        _m004 uint16_t                              w_deblocked_picture_index;      //{ +0x0005    } | .wDeblockedPictureIndex
        _m005 uint16_t                              w_forward_ref_picture_index;    //{ +0x0007    } | .wForwardRefPictureIndex
        _m006 uint16_t                              w_backward_ref_picture_index;   //{ +0x0009    } | .wBackwardRefPictureIndex
        _m007 uint16_t                              vop_time_increment_resolution;  //{ +0x000b    } | .vop_time_increment_resolution
        _m008 sdk::array<uint32_t, 2>               trb;                            //{ +0x000d    } | .TRB
        _m009 sdk::array<uint32_t, 2>               trd;                            //{ +0x0015    } | .TRD
        _m010 uint2_t                               un_pic_post_proc;               //{ +0x001c@8  } | .unPicPostProc
        _m011 uint1_t                               interlaced;                     //{ +0x001c@10 } | .interlaced
        _m012 uint1_t                               quant_type;                     //{ +0x001c@11 } | .quant_type
        _m013 uint1_t                               quarter_sample;                 //{ +0x001c@12 } | .quarter_sample
        _m014 uint1_t                               resync_marker_disable;          //{ +0x001c@13 } | .resync_marker_disable
        _m015 uint1_t                               data_partitioned;               //{ +0x001c@14 } | .data_partitioned
        _m016 uint1_t                               reversible_vlc;                 //{ +0x001c@15 } | .reversible_vlc
        _m017 uint1_t                               reduced_resolution_vop_enable;  //{ +0x001e@0  } | .reduced_resolution_vop_enable
        _m018 uint1_t                               vop_coded;                      //{ +0x001e@1  } | .vop_coded
        _m019 uint1_t                               vop_rounding_type;              //{ +0x001e@2  } | .vop_rounding_type
        _m020 uint3_t                               intra_dc_vlc_thr;               //{ +0x001e@3  } | .intra_dc_vlc_thr
        _m021 uint1_t                               top_field_first;                //{ +0x001e@6  } | .top_field_first
        _m022 uint1_t                               alternate_vertical_scan_flag;   //{ +0x001e@7  } | .alternate_vertical_scan_flag
        _m023 uint16_t                              w_pic_flag_bit_fields;          //{ +0x001d    } | .wPicFlagBitFields
        _m024 uint8_t                               profile_and_level_indication;   //{ +0x001f    } | .profile_and_level_indication
        _m025 uint8_t                               video_object_layer_verid;       //{ +0x0020    } | .video_object_layer_verid
        _m026 uint16_t                              vop_width;                      //{ +0x0021    } | .vop_width
        _m027 uint16_t                              vop_height;                     //{ +0x0023    } | .vop_height
        _m028 uint2_t                               sprite_enable;                  //{ +0x0024@8  } | .sprite_enable
        _m029 uint6_t                               no_of_sprite_warping_points;    //{ +0x0024@10 } | .no_of_sprite_warping_points
        _m030 uint2_t                               sprite_warping_accuracy;        //{ +0x0026@0  } | .sprite_warping_accuracy
        _m031 uint16_t                              w_sprite_bit_fields;            //{ +0x0025    } | .wSpriteBitFields
        _m032 sdk::array<sdk::array<int16_t, 2>, 4> warping_mv;                     //{ +0x0027    } | .warping_mv
        _m033 uint3_t                               vop_fcode_forward;              //{ +0x0037@0  } | .vop_fcode_forward
        _m034 uint3_t                               vop_fcode_backward;             //{ +0x0037@3  } | .vop_fcode_backward
        _m035 uint8_t                               w_fcode_bit_fields;             //{ +0x0037    } | .wFcodeBitFields
        _m036 uint16_t                              status_report_feedback_number;  //{ +0x0038    } | .StatusReportFeedbackNumber
        _m037 uint16_t                              reserved16_bits_a;              //{ +0x003a    } | .Reserved16BitsA
        _m038 uint16_t                              reserved16_bits_b;              //{ +0x003c    } | .Reserved16BitsB
                                                                                  
        SDK_NONVOL_PROPERTIES( "_DXVA_PicParams_MPEG4_PART2.$", 0x0, false, 0xd4e6874e9e71bcfc );                              
        SDK_FIXED_SIZE( pic_params_mpeg4_part2_t, 0x3e );                              
    };                                                                            
};
#include "magic/pic_params_mpeg4_part2_t.end.hpp"
SDK_VERIFY( struct dxva::pic_params_mpeg4_part2_t, 0x3e );
