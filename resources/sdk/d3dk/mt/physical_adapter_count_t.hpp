#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_adapter_count_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PHYSICAL_ADAPTER_COUNT]
    // => WDK 10 (NV)
    //
    struct physical_adapter_count_t
    {                              
        // WDK 10           
        //                  
        _m00 uint32_t count;         //{ +0x0000    } | .Count
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PHYSICAL_ADAPTER_COUNT.$", 0x0, false, 0x3717205360188a9d );      
        SDK_FIXED_SIZE( physical_adapter_count_t, 0x4 );      
    };                             
};
#include "magic/physical_adapter_count_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::physical_adapter_count_t, 0x4 );
