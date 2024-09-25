#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpuversion_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GPUVERSION]
    // => WDK 10 (NV)
    //
    struct gpuversion_t                                     
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 sdk::array<wchar_t, 32> bios_version;            //{ +0x0004    } | .BiosVersion
        _m02 sdk::array<wchar_t, 32> gpu_architecture;        //{ +0x0044    } | .GpuArchitecture
                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GPUVERSION.$", 0x0, false, 0x9f7864c7d46cf23c );                       
        SDK_FIXED_SIZE( gpuversion_t, 0x84 );                       
    };                                                      
};
#include "magic/gpuversion_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::gpuversion_t, 0x84 );
