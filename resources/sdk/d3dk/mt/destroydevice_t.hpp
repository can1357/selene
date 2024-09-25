#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroydevice_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYDEVICE]
    // => WDK 10 (NV)
    //
    struct destroydevice_t     
    {                          
        // WDK 10              
        //                     
        _m00 uint32_t h_device;  //{ +0x0000    } | .hDevice
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYDEVICE.$", 0x0, false, 0xbbad0624ea7403ca );         
        SDK_FIXED_SIZE( destroydevice_t, 0x4 );         
    };                         
};
#include "magic/destroydevice_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroydevice_t, 0x4 );
