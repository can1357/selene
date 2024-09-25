#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/present_display_only_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS]
    // => WDK 10 (NV)
    //
    struct present_display_only_flags_t
    {                                  
        // WDK 10            
        //                   
        _m00 uint1_t  rotate;            //{ +0x0000@0  } | .Rotate
        _m01 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS.$", 0x0, false, 0xace882a23380471c );       
        SDK_FIXED_SIZE( present_display_only_flags_t, 0x4 );       
    };                                 
};
#include "magic/present_display_only_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_display_only_flags_t, 0x4 );
