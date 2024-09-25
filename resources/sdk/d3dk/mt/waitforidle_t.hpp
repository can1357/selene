#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waitforidle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_WAITFORIDLE]
    // => WDK 10 (NV)
    //
    struct waitforidle_t       
    {                          
        // WDK 10              
        //                     
        _m00 uint32_t h_device;  //{ +0x0000    } | .hDevice
                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_WAITFORIDLE.$", 0x0, false, 0x437fc4055758a449 );         
        SDK_FIXED_SIZE( waitforidle_t, 0x4 );         
    };                         
};
#include "magic/waitforidle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::waitforidle_t, 0x4 );
