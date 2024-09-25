#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submitcommandflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITCOMMANDFLAGS]
    // => WDK 10 (NV)
    //
    struct submitcommandflags_t         
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t null_rendering;      //{ +0x0000@0  } | .NullRendering
        _m01 uint1_t present_redirected;  //{ +0x0000@1  } | .PresentRedirected
                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITCOMMANDFLAGS.$", 0x0, false, 0x5dbab0bbab2d6355 );                   
        SDK_FIXED_SIZE( submitcommandflags_t, 0x4 );                   
    };                                  
};
#include "magic/submitcommandflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitcommandflags_t, 0x4 );
