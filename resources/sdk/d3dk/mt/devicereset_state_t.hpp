#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicereset_state_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICERESET_STATE]
    // => WDK 10 (NV)
    //
    struct devicereset_state_t         
    {                                  
        // WDK 10                      
        //                             
        _m00 uint1_t  desktop_switched;  //{ +0x0000@0  } | .DesktopSwitched
        _m01 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICERESET_STATE.$", 0x0, false, 0xca2a28274f7b8e52 );                 
        SDK_FIXED_SIZE( devicereset_state_t, 0x4 );                 
    };                                 
};
#include "magic/devicereset_state_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::devicereset_state_t, 0x4 );
