#pragma once
#include <sdkgen/support_library.hpp>
#include "power_idle_states_t.hpp"

#include "magic/idle_state_table_t.start.hpp"
namespace fx
{
    class power_idle_machine_t;
    struct power_idle_target_state_t;

    // [struct FxIdleStateTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_state_table_t                                                
    {                                                                        
        using pfn_power_idle_state_entry_function_t = sdk::function<enum fx::power_idle_states_t(class fx::power_idle_machine_t*)>*;                    
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 pfn_power_idle_state_entry_function_t       state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 const struct fx::power_idle_target_state_t* target_states;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetStates
        _m02 uint32_t                                    target_states_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetStatesCount
                                                                             
        SDK_MAGIC_PROPERTIES( "FxIdleStateTable.$", 0x18, true, 0xbb3df485190b0afc );                    
        SDK_FIXED_SIZE( idle_state_table_t, 0x18 );                          
    };                                                                       
};
#include "magic/idle_state_table_t.end.hpp"
SDK_VERIFY( struct fx::idle_state_table_t, 0x18 );
