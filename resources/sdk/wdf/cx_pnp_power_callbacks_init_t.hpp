#pragma once
#include <sdkgen/support_library.hpp>
#include "wdfcx_pnppower_event_callbacks_t.hpp"
#include "wdfcx_power_policy_event_callbacks_t.hpp"

#include "magic/cx_pnp_power_callbacks_init_t.start.hpp"
namespace wdf
{
    // [struct CxPnpPowerCallbacksInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cx_pnp_power_callbacks_init_t                                             
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                           
        _m00 uint8_t                                          set;                     //{ +0x00c8    +0x01a8    +0x01a8    +0x01a8    } | .Set
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                           
        _m01 struct wdf::wdfcx_pnppower_event_callbacks_t     pnp_power_callbacks;     //{ +0x0000    +0x0000    +0x0000    } | .PnpPowerCallbacks
        _m02 struct wdf::wdfcx_power_policy_event_callbacks_t power_policy_callbacks;  //{ +0x0118    +0x0118    +0x0118    } | .PowerPolicyCallbacks
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m03 struct wdf::wdfcx_pnppower_event_callbacks_t     callbacks;               //{ +0x0000    } | .Callbacks
                                                                                     
        SDK_MAGIC_PROPERTIES( "CxPnpPowerCallbacksInit.$", 0x1b0, true, 0x5b0af2a1332a7ab3 );                       
        SDK_DYNAMIC_SIZE( cx_pnp_power_callbacks_init_t );                           
    };                                                                               
};
#include "magic/cx_pnp_power_callbacks_init_t.end.hpp"
