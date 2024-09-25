#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setdisplaymode_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETDISPLAYMODE_FLAGS]
    // => WDK 10 (NV)
    //
    struct setdisplaymode_flags_t    
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t preserve_vid_pn;  //{ +0x0000@0  } | .PreserveVidPn
                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETDISPLAYMODE_FLAGS.$", 0x0, false, 0x7908df3fa401b48 );                
        SDK_FIXED_SIZE( setdisplaymode_flags_t, 0x8 );                
    };                               
};
#include "magic/setdisplaymode_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setdisplaymode_flags_t, 0x8 );
