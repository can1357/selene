#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentout2_t.start.hpp"
namespace dxgk
{
    struct segmentdescriptor2_t;

    // [struct _DXGK_QUERYSEGMENTOUT2]
    // => WDK 10 (NV)
    //
    struct querysegmentout2_t                                        
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                           segment_count;         //{ +0x0000    } | .SegmentCount
        _m01 struct dxgk::segmentdescriptor2_t* p_segment_descriptor;  //{ +0x0008    } | .pSegmentDescriptor
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTOUT2.$", 0x0, false, 0xfd9572f3f181f946 );                     
        SDK_FIXED_SIZE( querysegmentout2_t, 0x10 );                     
    };                                                               
};
#include "magic/querysegmentout2_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentout2_t, 0x10 );
