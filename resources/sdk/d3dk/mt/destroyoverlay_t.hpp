#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyoverlay_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYOVERLAY]
    // => WDK 10 (NV)
    //
    struct destroyoverlay_t     
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t h_device;   //{ +0x0000    } | .hDevice
        _m01 uint32_t h_overlay;  //{ +0x0004    } | .hOverlay
                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYOVERLAY.$", 0x0, false, 0xd31d64774380f162 );          
        SDK_FIXED_SIZE( destroyoverlay_t, 0x8 );          
    };                          
};
#include "magic/destroyoverlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyoverlay_t, 0x8 );
