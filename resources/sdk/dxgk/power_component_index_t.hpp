#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_component_index_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_COMPONENT_INDEX]
    // => WDK 10 (NV)
    //
    struct power_component_index_t                     
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint16_t physical_adapter_component_index;  //{ +0x0000    } | .PhysicalAdapterComponentIndex
        _m01 uint16_t physical_adapter_index;            //{ +0x0002    } | .PhysicalAdapterIndex
        _m02 uint32_t value;                             //{ +0x0000    } | .Value
                                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_INDEX.$", 0x0, false, 0x25f524a4863aa15 );                                 
        SDK_FIXED_SIZE( power_component_index_t, 0x4 );                                 
    };                                                 
};
#include "magic/power_component_index_t.end.hpp"
SDK_VERIFY( struct dxgk::power_component_index_t, 0x4 );
