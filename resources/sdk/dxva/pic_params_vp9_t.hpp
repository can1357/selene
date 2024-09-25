#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_v_px_t.hpp"
#include "../nt/segmentation_vp9_t.hpp"

#include "magic/pic_params_vp9_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicParams_VP9]
    // => WDK 10 (NV)
    //
    struct pic_params_vp9_t                                                                      
    {                                                                                            
        // WDK 10                                                                                
        //                                                                                       
        _m000 struct dxva::pic_entry_v_px_t                curr_pic;                               //{ +0x0000    } | .CurrPic
        _m001 uint8_t                                      profile;                                //{ +0x0001    } | .profile
        _m002 uint1_t                                      frame_type;                             //{ +0x0002@0  } | .frame_type
        _m003 uint1_t                                      show_frame;                             //{ +0x0002@1  } | .show_frame
        _m004 uint1_t                                      error_resilient_mode;                   //{ +0x0002@2  } | .error_resilient_mode
        _m005 uint1_t                                      subsampling_x;                          //{ +0x0002@3  } | .subsampling_x
        _m006 uint1_t                                      subsampling_y;                          //{ +0x0002@4  } | .subsampling_y
        _m007 uint1_t                                      extra_plane;                            //{ +0x0002@5  } | .extra_plane
        _m008 uint1_t                                      refresh_frame_context;                  //{ +0x0002@6  } | .refresh_frame_context
        _m009 uint1_t                                      frame_parallel_decoding_mode;           //{ +0x0002@7  } | .frame_parallel_decoding_mode
        _m010 uint1_t                                      intra_only;                             //{ +0x0002@8  } | .intra_only
        _m011 uint2_t                                      frame_context_idx;                      //{ +0x0002@9  } | .frame_context_idx
        _m012 uint2_t                                      reset_frame_context;                    //{ +0x0002@11 } | .reset_frame_context
        _m013 uint1_t                                      allow_high_precision_mv;                //{ +0x0002@13 } | .allow_high_precision_mv
        _m014 uint2_t                                      reserved_format_info2_bits;             //{ +0x0002@14 } | .ReservedFormatInfo2Bits
        _m015 uint16_t                                     w_format_and_picture_info_flags;        //{ +0x0002    } | .wFormatAndPictureInfoFlags
        _m016 uint32_t                                     width;                                  //{ +0x0004    } | .width
        _m017 uint32_t                                     height;                                 //{ +0x0008    } | .height
        _m018 uint8_t                                      bit_depth_minus8_luma;                  //{ +0x000c    } | .BitDepthMinus8Luma
        _m019 uint8_t                                      bit_depth_minus8_chroma;                //{ +0x000d    } | .BitDepthMinus8Chroma
        _m020 uint8_t                                      interp_filter;                          //{ +0x000e    } | .interp_filter
        _m021 uint8_t                                      reserved8_bits;                         //{ +0x000f    } | .Reserved8Bits
        _m022 sdk::array<struct dxva::pic_entry_v_px_t, 8> ref_frame_map;                          //{ +0x0010    } | .ref_frame_map
        _m023 sdk::array<uint32_t, 8>                      ref_frame_coded_width;                  //{ +0x0018    } | .ref_frame_coded_width
        _m024 sdk::array<uint32_t, 8>                      ref_frame_coded_height;                 //{ +0x0038    } | .ref_frame_coded_height
        _m025 sdk::array<struct dxva::pic_entry_v_px_t, 3> frame_refs;                             //{ +0x0058    } | .frame_refs
        _m026 sdk::array<char, 4>                          ref_frame_sign_bias;                    //{ +0x005b    } | .ref_frame_sign_bias
        _m027 char                                         filter_level;                           //{ +0x005f    } | .filter_level
        _m028 char                                         sharpness_level;                        //{ +0x0060    } | .sharpness_level
        _m029 uint1_t                                      mode_ref_delta_enabled;                 //{ +0x0061@0  } | .mode_ref_delta_enabled
        _m030 uint1_t                                      mode_ref_delta_update;                  //{ +0x0061@1  } | .mode_ref_delta_update
        _m031 uint1_t                                      use_prev_in_find_mv_refs;               //{ +0x0061@2  } | .use_prev_in_find_mv_refs
        _m032 uint5_t                                      reserved_control_info5_bits;            //{ +0x0061@3  } | .ReservedControlInfo5Bits
        _m033 uint8_t                                      w_control_info_flags;                   //{ +0x0061    } | .wControlInfoFlags
        _m034 sdk::array<char, 4>                          ref_deltas;                             //{ +0x0062    } | .ref_deltas
        _m035 sdk::array<char, 2>                          mode_deltas;                            //{ +0x0066    } | .mode_deltas
        _m036 int16_t                                      base_qindex;                            //{ +0x0068    } | .base_qindex
        _m037 char                                         y_dc_delta_q;                           //{ +0x006a    } | .y_dc_delta_q
        _m038 char                                         uv_dc_delta_q;                          //{ +0x006b    } | .uv_dc_delta_q
        _m039 char                                         uv_ac_delta_q;                          //{ +0x006c    } | .uv_ac_delta_q
        _m040 struct nt::segmentation_vp9_t                st_vp9_segments;                        //{ +0x006d    } | .stVP9Segments
        _m041 uint8_t                                      log2_tile_cols;                         //{ +0x00c0    } | .log2_tile_cols
        _m042 uint8_t                                      log2_tile_rows;                         //{ +0x00c1    } | .log2_tile_rows
        _m043 uint16_t                                     uncompressed_header_size_byte_aligned;  //{ +0x00c2    } | .uncompressed_header_size_byte_aligned
        _m044 uint16_t                                     first_partition_size;                   //{ +0x00c4    } | .first_partition_size
        _m045 uint16_t                                     reserved16_bits;                        //{ +0x00c6    } | .Reserved16Bits
        _m046 uint32_t                                     reserved32_bits;                        //{ +0x00c8    } | .Reserved32Bits
        _m047 uint32_t                                     status_report_feedback_number;          //{ +0x00cc    } | .StatusReportFeedbackNumber
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXVA_PicParams_VP9.$", 0x0, false, 0x2e2d48beb79a284b );                                      
        SDK_FIXED_SIZE( pic_params_vp9_t, 0xd0 );                                                
    };                                                                                           
};
#include "magic/pic_params_vp9_t.end.hpp"
SDK_VERIFY( struct dxva::pic_params_vp9_t, 0xd0 );
