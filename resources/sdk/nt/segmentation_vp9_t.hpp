#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentation_vp9_t.start.hpp"
namespace nt
{
    // [struct _segmentation_VP9]
    // => WDK 10 (NV)
    //
    struct segmentation_vp9_t                                                   
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint1_t                               enabled;                       //{ +0x0000@0  } | .enabled
        _m01 uint1_t                               update_map;                    //{ +0x0000@1  } | .update_map
        _m02 uint1_t                               temporal_update;               //{ +0x0000@2  } | .temporal_update
        _m03 uint1_t                               abs_delta;                     //{ +0x0000@3  } | .abs_delta
        _m04 uint4_t                               reserved_segment_flags4_bits;  //{ +0x0000@4  } | .ReservedSegmentFlags4Bits
        _m05 uint8_t                               w_segment_info_flags;          //{ +0x0000    } | .wSegmentInfoFlags
        _m06 sdk::array<uint8_t, 7>                tree_probs;                    //{ +0x0001    } | .tree_probs
        _m07 sdk::array<uint8_t, 3>                pred_probs;                    //{ +0x0008    } | .pred_probs
        _m08 sdk::array<sdk::array<int16_t, 4>, 8> feature_data;                  //{ +0x000b    } | .feature_data
        _m09 sdk::array<uint8_t, 8>                feature_mask;                  //{ +0x004b    } | .feature_mask
                                                                                
        SDK_NONVOL_PROPERTIES( "_segmentation_VP9.$", 0x0, false, 0x922b1a4c2dea163 );                             
        SDK_FIXED_SIZE( segmentation_vp9_t, 0x53 );                             
    };                                                                          
};
#include "magic/segmentation_vp9_t.end.hpp"
SDK_VERIFY( struct nt::segmentation_vp9_t, 0x53 );
