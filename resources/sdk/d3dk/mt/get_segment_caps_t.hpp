#pragma once
#include <sdkgen/support_library.hpp>
#include "segment_caps_t.hpp"

#include "magic/get_segment_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_SEGMENT_CAPS]
    // => WDK 10 (NV)
    //
    struct get_segment_caps_t                                                       
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 uint32_t                                        physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint32_t                                        num_segments;            //{ +0x0004    } | .NumSegments
        _m02 sdk::array<struct d3dk::mt::segment_caps_t, 32> segment_caps;            //{ +0x0008    } | .SegmentCaps
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_SEGMENT_CAPS.$", 0x0, false, 0x427f9a1371f0d69e );                       
        SDK_FIXED_SIZE( get_segment_caps_t, 0x308 );                                
    };                                                                              
};
#include "magic/get_segment_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_segment_caps_t, 0x308 );
