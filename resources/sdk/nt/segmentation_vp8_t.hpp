#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentation_vp8_t.start.hpp"
namespace nt
{
    // [struct _segmentation_VP8]
    // => WDK 10 (NV)
    //
    struct segmentation_vp8_t                                                
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint1_t                            segmentation_enabled;          //{ +0x0000@0  } | .segmentation_enabled
        _m01 uint1_t                            update_mb_segmentation_map;    //{ +0x0000@1  } | .update_mb_segmentation_map
        _m02 uint1_t                            update_mb_segmentation_data;   //{ +0x0000@2  } | .update_mb_segmentation_data
        _m03 uint1_t                            mb_segement_abs_delta;         //{ +0x0000@3  } | .mb_segement_abs_delta
        _m04 uint4_t                            reserved_segment_flags4_bits;  //{ +0x0000@4  } | .ReservedSegmentFlags4Bits
        _m05 uint8_t                            w_segment_flags;               //{ +0x0000    } | .wSegmentFlags
        _m06 sdk::array<sdk::array<char, 4>, 2> segment_feature_data;          //{ +0x0001    } | .segment_feature_data
        _m07 sdk::array<uint8_t, 3>             mb_segment_tree_probs;         //{ +0x0009    } | .mb_segment_tree_probs
                                                                             
        SDK_NONVOL_PROPERTIES( "_segmentation_VP8.$", 0x0, false, 0xf33c784104380458 );                             
        SDK_FIXED_SIZE( segmentation_vp8_t, 0xc );                             
    };                                                                       
};
#include "magic/segmentation_vp8_t.end.hpp"
SDK_VERIFY( struct nt::segmentation_vp8_t, 0xc );
