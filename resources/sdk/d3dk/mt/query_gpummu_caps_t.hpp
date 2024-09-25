#pragma once
#include <sdkgen/support_library.hpp>
#include "gpummu_caps_t.hpp"

#include "magic/query_gpummu_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_GPUMMU_CAPS]
    // => WDK 10 (NV)
    //
    struct query_gpummu_caps_t                                     
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                       physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 struct d3dk::mt::gpummu_caps_t caps;                    //{ +0x0004    } | .Caps
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_GPUMMU_CAPS.$", 0x0, false, 0xe66eeae18136f12d );                       
        SDK_FIXED_SIZE( query_gpummu_caps_t, 0xc );                       
    };                                                             
};
#include "magic/query_gpummu_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_gpummu_caps_t, 0xc );
