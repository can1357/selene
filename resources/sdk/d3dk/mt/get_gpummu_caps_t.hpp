#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dxgk/escape_gpummucaps_t.hpp"

#include "magic/get_gpummu_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_GPUMMU_CAPS]
    // => WDK 10 (NV)
    //
    struct get_gpummu_caps_t                                         
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                         physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 struct dxgk::escape_gpummucaps_t gpu_mmu_caps;            //{ +0x0008    } | .GpuMmuCaps
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_GPUMMU_CAPS.$", 0x0, false, 0x3568432fa8a73d69 );                       
        SDK_FIXED_SIZE( get_gpummu_caps_t, 0x108 );                       
    };                                                               
};
#include "magic/get_gpummu_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_gpummu_caps_t, 0x108 );
