#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_description_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DRIVER_DESCRIPTION]
    // => WDK 10 (NV)
    //
    struct driver_description_t                           
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 sdk::array<wchar_t, 4096> driver_description;  //{ +0x0000    } | .DriverDescription
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DRIVER_DESCRIPTION.$", 0x0, false, 0x7eb35e88282b1437 );                   
        SDK_FIXED_SIZE( driver_description_t, 0x2000 );                   
    };                                                    
};
#include "magic/driver_description_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::driver_description_t, 0x2000 );
