#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enumadapters_filter_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_ENUMADAPTERS_FILTER]
    // => WDK 10 (NV)
    //
    union enumadapters_filter_t            
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t  include_compute_only;  //{ +0x0000@0  } | .IncludeComputeOnly
        _m01 uint1_t  include_display_only;  //{ +0x0000@1  } | .IncludeDisplayOnly
        _m02 uint64_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ENUMADAPTERS_FILTER.$", 0x0, false, 0x4047f3e253e92f13 );                     
        SDK_FIXED_SIZE( enumadapters_filter_t, 0x8 );                     
    };                                     
};
#include "magic/enumadapters_filter_t.end.hpp"
SDK_VERIFY( union d3dk::mt::enumadapters_filter_t, 0x8 );
