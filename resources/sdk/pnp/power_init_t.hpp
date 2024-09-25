#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/tri_state_t.hpp"
#include "../wdf/pnppower_event_callbacks_t.hpp"
#include "../wdf/power_policy_event_callbacks_t.hpp"

namespace fx { struct pnp_state_callback_t;          }
namespace fx { struct power_policy_state_callback_t; }
namespace fx { struct power_state_callback_t;        }

#include "magic/power_init_t.start.hpp"
namespace pnp
{
    // [struct PnpPowerInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_init_t                                                              
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                           
        _m00 struct wdf::pnppower_event_callbacks_t     pnp_power_event_callbacks;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PnpPowerEventCallbacks
        _m01 struct wdf::power_policy_event_callbacks_t policy_event_callbacks;        //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .PolicyEventCallbacks
        _m02 struct fx::pnp_state_callback_t*           pnp_state_callbacks;           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .PnpStateCallbacks
        _m03 struct fx::power_state_callback_t*         power_state_callbacks;         //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .PowerStateCallbacks
        _m04 struct fx::power_policy_state_callback_t*  power_policy_state_callbacks;  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .PowerPolicyStateCallbacks
        _m05 enum wdf::tri_state_t                      power_policy_owner;            //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .PowerPolicyOwner
                                                                                     
        SDK_MAGIC_PROPERTIES( "PnpPowerInit.$", 0xf0, true, 0xaaac32f7e0070752 );                             
        SDK_FIXED_SIZE( power_init_t, 0xf0 );                                        
    };                                                                               
};
#include "magic/power_init_t.end.hpp"
SDK_VERIFY( struct pnp::power_init_t, 0xf0 );
