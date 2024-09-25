#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct device_pnp_notification_data_t; }
namespace wdf { struct wdfdevice_t;                    }

#include "magic/pnp_state_callback_info_t.start.hpp"
namespace fx
{
    // [struct FxPnpStateCallbackInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pnp_state_callback_info_t                                  
    {                                                                 
        using pfn_wdf_device_pnp_state_change_notification_t = sdk::function<void(struct wdf::wdfdevice_t*, const struct wdf::device_pnp_notification_data_t*)>*;         
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                            
        _m00 uint32_t                                        types;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Types
        _m01 pfn_wdf_device_pnp_state_change_notification_t  callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callback
                                                                      
        SDK_MAGIC_PROPERTIES( "FxPnpStateCallbackInfo.$", 0x10, true, 0x8cafdc1a16de2ac4 );         
        SDK_FIXED_SIZE( pnp_state_callback_info_t, 0x10 );            
    };                                                                
};
#include "magic/pnp_state_callback_info_t.end.hpp"
SDK_VERIFY( struct fx::pnp_state_callback_info_t, 0x10 );
