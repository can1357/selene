#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "power_runtime_state_t.hpp"
#include "power_component_flags_t.hpp"
#include "power_component_mapping_t.hpp"

#include "magic/power_runtime_component_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_RUNTIME_COMPONENT]
    // => WDK 10 (NV)
    //
    struct power_runtime_component_t                                  
    {                                                                 
        using states_t = sdk::array<struct dxgk::power_runtime_state_t, 8>;                  
                                                                      
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                               state_count;        //{ +0x0000    } | .StateCount
        _m01 states_t                               states;             //{ +0x0008    } | .States
        _m02 struct dxgk::power_component_mapping_t component_mapping;  //{ +0x00c8    } | .ComponentMapping
        _m03 struct dxgk::power_component_flags_t   flags;              //{ +0x00d0    } | .Flags
        _m04 struct nt::guid_t                      component_guid;     //{ +0x00d4    } | .ComponentGuid
        _m05 sdk::array<uint8_t, 40>                component_name;     //{ +0x00e4    } | .ComponentName
        _m06 uint32_t                               provider_count;     //{ +0x010c    } | .ProviderCount
        _m07 sdk::array<uint32_t, 16>               providers;          //{ +0x0110    } | .Providers
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_RUNTIME_COMPONENT.$", 0x0, false, 0xf3701cac33b4442a );                  
        SDK_FIXED_SIZE( power_runtime_component_t, 0x150 );                  
    };                                                                
};
#include "magic/power_runtime_component_t.end.hpp"
SDK_VERIFY( struct dxgk::power_runtime_component_t, 0x150 );
