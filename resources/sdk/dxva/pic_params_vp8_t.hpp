#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_v_px_t.hpp"
#include "../nt/segmentation_vp8_t.hpp"

#include "magic/pic_params_vp8_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicParams_VP8]
    // => WDK 10 (NV)
    //
    struct pic_params_vp8_t                                                        
    {                                                                              
        using vp8_coef_update_probs_t = sdk::array<sdk::array<sdk::array<sdk::array<uint8_t, 11>, 3>, 8>, 4>;                              
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m000 uint32_t                               first_part_size;                //{ +0x0000    } | .first_part_size
        _m001 uint32_t                               width;                          //{ +0x0004    } | .width
        _m002 uint32_t                               height;                         //{ +0x0008    } | .height
        _m003 struct dxva::pic_entry_v_px_t          curr_pic;                       //{ +0x000c    } | .CurrPic
        _m004 uint1_t                                frame_type;                     //{ +0x000d@0  } | .frame_type
        _m005 uint3_t                                version;                        //{ +0x000d@1  } | .version
        _m006 uint1_t                                show_frame;                     //{ +0x000d@4  } | .show_frame
        _m007 uint1_t                                clamp_type;                     //{ +0x000d@5  } | .clamp_type
        _m008 uint2_t                                reserved_frame_tag3_bits;       //{ +0x000d@6  } | .ReservedFrameTag3Bits
        _m009 uint8_t                                w_frame_tag_flags;              //{ +0x000d    } | .wFrameTagFlags
        _m010 struct nt::segmentation_vp8_t          st_vp8_segments;                //{ +0x000e    } | .stVP8Segments
        _m011 uint8_t                                filter_type;                    //{ +0x001a    } | .filter_type
        _m012 uint8_t                                filter_level;                   //{ +0x001b    } | .filter_level
        _m013 uint8_t                                sharpness_level;                //{ +0x001c    } | .sharpness_level
        _m014 uint8_t                                mode_ref_lf_delta_enabled;      //{ +0x001d    } | .mode_ref_lf_delta_enabled
        _m015 uint8_t                                mode_ref_lf_delta_update;       //{ +0x001e    } | .mode_ref_lf_delta_update
        _m016 sdk::array<char, 4>                    ref_lf_deltas;                  //{ +0x001f    } | .ref_lf_deltas
        _m017 sdk::array<char, 4>                    mode_lf_deltas;                 //{ +0x0023    } | .mode_lf_deltas
        _m018 uint8_t                                log2_nbr_of_dct_partitions;     //{ +0x0027    } | .log2_nbr_of_dct_partitions
        _m019 uint8_t                                base_qindex;                    //{ +0x0028    } | .base_qindex
        _m020 char                                   y1dc_delta_q;                   //{ +0x0029    } | .y1dc_delta_q
        _m021 char                                   y2dc_delta_q;                   //{ +0x002a    } | .y2dc_delta_q
        _m022 char                                   y2ac_delta_q;                   //{ +0x002b    } | .y2ac_delta_q
        _m023 char                                   uvdc_delta_q;                   //{ +0x002c    } | .uvdc_delta_q
        _m024 char                                   uvac_delta_q;                   //{ +0x002d    } | .uvac_delta_q
        _m025 struct dxva::pic_entry_v_px_t          alt_fb_idx;                     //{ +0x002e    } | .alt_fb_idx
        _m026 struct dxva::pic_entry_v_px_t          gld_fb_idx;                     //{ +0x002f    } | .gld_fb_idx
        _m027 struct dxva::pic_entry_v_px_t          lst_fb_idx;                     //{ +0x0030    } | .lst_fb_idx
        _m028 uint8_t                                ref_frame_sign_bias_golden;     //{ +0x0031    } | .ref_frame_sign_bias_golden
        _m029 uint8_t                                ref_frame_sign_bias_altref;     //{ +0x0032    } | .ref_frame_sign_bias_altref
        _m030 uint8_t                                refresh_entropy_probs;          //{ +0x0033    } | .refresh_entropy_probs
        _m031 vp8_coef_update_probs_t                vp8_coef_update_probs;          //{ +0x0034    } | .vp8_coef_update_probs
        _m032 uint8_t                                mb_no_coeff_skip;               //{ +0x0454    } | .mb_no_coeff_skip
        _m033 uint8_t                                prob_skip_false;                //{ +0x0455    } | .prob_skip_false
        _m034 uint8_t                                prob_intra;                     //{ +0x0456    } | .prob_intra
        _m035 uint8_t                                prob_last;                      //{ +0x0457    } | .prob_last
        _m036 uint8_t                                prob_golden;                    //{ +0x0458    } | .prob_golden
        _m037 sdk::array<uint8_t, 4>                 intra_16x16_prob;               //{ +0x0459    } | .intra_16x16_prob
        _m038 sdk::array<uint8_t, 3>                 intra_chroma_prob;              //{ +0x045d    } | .intra_chroma_prob
        _m039 sdk::array<sdk::array<uint8_t, 19>, 2> vp8_mv_update_probs;            //{ +0x0460    } | .vp8_mv_update_probs
        _m040 uint32_t                               status_report_feedback_number;  //{ +0x048c    } | .StatusReportFeedbackNumber
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXVA_PicParams_VP8.$", 0x0, false, 0x551355179e6d8f69 );                              
        SDK_FIXED_SIZE( pic_params_vp8_t, 0x490 );                                 
    };                                                                             
};
#include "magic/pic_params_vp8_t.end.hpp"
SDK_VERIFY( struct dxva::pic_params_vp8_t, 0x490 );
