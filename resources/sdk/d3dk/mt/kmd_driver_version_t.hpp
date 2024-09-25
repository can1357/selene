#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kmd_driver_version_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_KMD_DRIVER_VERSION]
    // => WDK 10 (NV)
    //
    struct kmd_driver_version_t     
    {                               
        // WDK 10                   
        //                          
        _m00 int64_t driver_version;  //{ +0x0000    } | .DriverVersion
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_KMD_DRIVER_VERSION.$", 0x0, false, 0xd2a3e79d139c7076 );               
        SDK_FIXED_SIZE( kmd_driver_version_t, 0x8 );               
    };                              
};
#include "magic/kmd_driver_version_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::kmd_driver_version_t, 0x8 );
