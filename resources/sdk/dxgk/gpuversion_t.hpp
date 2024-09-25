#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpuversion_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUVERSION]
    // => WDK 10 (NV)
    //
    struct gpuversion_t                               
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 sdk::array<wchar_t, 32> bios_version;      //{ +0x0000    } | .BiosVersion
        _m01 sdk::array<wchar_t, 32> gpu_architecture;  //{ +0x0040    } | .GpuArchitecture
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUVERSION.$", 0x0, false, 0xb65e7067e47b6b90 );                 
        SDK_FIXED_SIZE( gpuversion_t, 0x80 );                 
    };                                                
};
#include "magic/gpuversion_t.end.hpp"
SDK_VERIFY( struct dxgk::gpuversion_t, 0x80 );
