#pragma once
#include <sdkgen/support_library.hpp>
#include "../fx/pwr_pol_state_info_t.hpp"
#include "policy_event_target_state_t.hpp"
#include "../wdf/device_power_policy_state_t.hpp"

namespace fx { class pkg_pnp_t; }

#include "magic/policy_state_table_t.start.hpp"
namespace power
{
    // [struct POWER_POLICY_STATE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct policy_state_table_t                                                   
    {                                                                             
        using state_func_t = sdk::function<enum wdf::device_power_policy_state_t(class fx::pkg_pnp_t*)>*;                    
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 state_func_t                                     state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 struct power::policy_event_target_state_t        first_target_state;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstTargetState
        _m02 const struct power::policy_event_target_state_t* other_target_states;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OtherTargetStates
        _m03 union fx::pwr_pol_state_info_t                   state_info;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StateInfo
                                                                                  
        SDK_MAGIC_PROPERTIES( "POWER_POLICY_STATE_TABLE.$", 0x20, true, 0xe03d748e23b38d55 );                    
        SDK_FIXED_SIZE( policy_state_table_t, 0x20 );                             
    };                                                                            
};
#include "magic/policy_state_table_t.end.hpp"
SDK_VERIFY( struct power::policy_state_table_t, 0x20 );
