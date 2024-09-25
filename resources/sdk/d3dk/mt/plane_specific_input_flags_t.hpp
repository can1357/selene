#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plane_specific_input_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS]
    // => WDK 10 (NV)
    //
    struct plane_specific_input_flags_t
    {                                  
        // WDK 10             
        //                    
        _m00 uint1_t  enabled;           //{ +0x0000@0  } | .Enabled
        _m01 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS.$", 0x0, false, 0xa2c31ec940790941 );        
        SDK_FIXED_SIZE( plane_specific_input_flags_t, 0x4 );        
    };                                 
};
#include "magic/plane_specific_input_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::plane_specific_input_flags_t, 0x4 );
