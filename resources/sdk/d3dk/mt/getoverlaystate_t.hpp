#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getoverlaystate_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETOVERLAYSTATE]
    // => WDK 10 (NV)
    //
    struct getoverlaystate_t          
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t h_device;         //{ +0x0000    } | .hDevice
        _m01 uint32_t h_overlay;        //{ +0x0004    } | .hOverlay
        _m02 uint8_t  overlay_enabled;  //{ +0x0008    } | .OverlayEnabled
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETOVERLAYSTATE.$", 0x0, false, 0x4ee8848a9010a63a );                
        SDK_FIXED_SIZE( getoverlaystate_t, 0xc );                
    };                                
};
#include "magic/getoverlaystate_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getoverlaystate_t, 0xc );
