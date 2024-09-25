#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chromaticity_coordinate_t.start.hpp"
namespace nt
{
    // [struct _CHROMATICITY_COORDINATE]
    // => WDK 10 (NV)
    //
    struct chromaticity_coordinate_t
    {                               
        // WDK 10    
        //           
        _m00 float x;                 //{ +0x0000    } | .x
        _m01 float y;                 //{ +0x0004    } | .y
                                    
        SDK_NONVOL_PROPERTIES( "_CHROMATICITY_COORDINATE.$", 0x0, false, 0xe59c89efd46bd484 );  
        SDK_FIXED_SIZE( chromaticity_coordinate_t, 0x8 );  
    };                              
};
#include "magic/chromaticity_coordinate_t.end.hpp"
SDK_VERIFY( struct nt::chromaticity_coordinate_t, 0x8 );
