#pragma once
#include <sdkgen/support_library.hpp>
#include "device_power_policy_state_t.hpp"

namespace fx    { class pkg_pnp_t;                    }
namespace power { struct policy_event_target_state_t; }

#include "magic/not_power_policy_owner_state_table_t.start.hpp"
namespace wdf
{
    // [struct NOT_POWER_POLICY_OWNER_STATE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct not_power_policy_owner_state_table_t                                    
    {                                                                              
        using state_func_t = sdk::function<enum wdf::device_power_policy_state_t(class fx::pkg_pnp_t*)>*;                     
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                         
        _m00 enum wdf::device_power_policy_state_t            current_target_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentTargetState
        _m01 state_func_t                                     state_func;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StateFunc
        _m02 const struct power::policy_event_target_state_t* target_states;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetStates
        _m03 uint8_t                                          target_states_count;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TargetStatesCount
        _m04 uint8_t                                          queue_open;            //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .QueueOpen
                                                                                   
        SDK_MAGIC_PROPERTIES( "NOT_POWER_POLICY_OWNER_STATE_TABLE.$", 0x20, true, 0x4509145193ecc423 );                     
        SDK_FIXED_SIZE( not_power_policy_owner_state_table_t, 0x20 );                     
    };                                                                             
};
#include "magic/not_power_policy_owner_state_table_t.end.hpp"
SDK_VERIFY( struct wdf::not_power_policy_owner_state_table_t, 0x20 );
