#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/configuresharedresource_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CONFIGURESHAREDRESOURCE]
    // => WDK 10 (NV)
    //
    struct configuresharedresource_t
    {                               
        // WDK 10                  
        //                         
        _m00 uint32_t h_device;       //{ +0x0000    } | .hDevice
        _m01 uint32_t h_resource;     //{ +0x0004    } | .hResource
        _m02 uint8_t  is_dwm;         //{ +0x0008    } | .IsDwm
        _m03 void*    h_process;      //{ +0x0010    } | .hProcess
        _m04 uint8_t  allow_access;   //{ +0x0018    } | .AllowAccess
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CONFIGURESHAREDRESOURCE.$", 0x0, false, 0x537d609a412d6591 );             
        SDK_FIXED_SIZE( configuresharedresource_t, 0x20 );             
    };                              
};
#include "magic/configuresharedresource_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::configuresharedresource_t, 0x20 );
