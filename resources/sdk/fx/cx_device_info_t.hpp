#pragma once
#include <sdkgen/support_library.hpp>
#include "io_in_caller_context_t.hpp"
#include "../wdf/object_attributes_t.hpp"

#include "magic/cx_device_info_t.start.hpp"
namespace fx
{
    class driver_t;
    class cx_pnp_power_callback_context_t;

    // [struct FxCxDeviceInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cx_device_info_t                                                   
    {                                                                         
        using cx_pnp_power_callback_contexts_t = sdk::array<class fx::cx_pnp_power_callback_context_t*, 10>;                               
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m00 nt::list_entry_t                  list_entry;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 class fx::driver_t*               driver;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Driver
        _m02 class fx::io_in_caller_context_t  io_in_caller_context_callback;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoInCallerContextCallback
        _m03 struct wdf::object_attributes_t   request_attributes;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestAttributes
        _m04 char                              index;                           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Index
        _m05 cx_pnp_power_callback_contexts_t  cx_pnp_power_callback_contexts;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CxPnpPowerCallbackContexts
                                                                              
        SDK_MAGIC_PROPERTIES( "FxCxDeviceInfo.$", 0x108, true, 0x1a02917d81a5a0f8 );                               
        SDK_DYNAMIC_SIZE( cx_device_info_t );                                 
    };                                                                        
};
#include "magic/cx_device_info_t.end.hpp"
