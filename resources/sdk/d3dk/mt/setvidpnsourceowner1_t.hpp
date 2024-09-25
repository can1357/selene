#pragma once
#include <sdkgen/support_library.hpp>
#include "setvidpnsourceowner_t.hpp"
#include "vidpnsourceowner_flags_t.hpp"

#include "magic/setvidpnsourceowner1_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETVIDPNSOURCEOWNER1]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceowner1_t                               
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 struct d3dk::mt::setvidpnsourceowner_t    version0;  //{ +0x0000    } | .Version0
        _m01 struct d3dk::mt::vidpnsourceowner_flags_t flags;     //{ +0x0020    } | .Flags
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETVIDPNSOURCEOWNER1.$", 0x0, false, 0x22af4f32ac8b56be );         
        SDK_FIXED_SIZE( setvidpnsourceowner1_t, 0x28 );         
    };                                                          
};
#include "magic/setvidpnsourceowner1_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setvidpnsourceowner1_t, 0x28 );
