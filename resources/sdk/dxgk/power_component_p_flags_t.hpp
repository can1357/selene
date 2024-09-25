#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_component_p_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_COMPONENT_P_FLAGS]
    // => WDK 10 (NV)
    //
    struct power_component_p_flags_t
    {                               
        // WDK 10           
        //                  
        _m00 uint32_t value;          //{ +0x0000    } | .Value
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_P_FLAGS.$", 0x0, false, 0x20b0b924ea4600ab );      
        SDK_FIXED_SIZE( power_component_p_flags_t, 0x4 );      
    };                              
};
#include "magic/power_component_p_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::power_component_p_flags_t, 0x4 );
