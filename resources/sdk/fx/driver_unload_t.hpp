#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdriver_t; }

#include "magic/driver_unload_t.start.hpp"
namespace fx
{
    // [class FxDriverUnload]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class driver_unload_t                                          
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                         
        _m00 sdk::function<void(struct wdf::wdfdriver_t*)>* method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                                   
        SDK_MAGIC_PROPERTIES( "FxDriverUnload.$", 0x8, true, 0x90dff5a929fa5314 );       
        SDK_FIXED_SIZE( driver_unload_t, 0x8 );                    
    };                                                             
};
#include "magic/driver_unload_t.end.hpp"
SDK_VERIFY( class fx::driver_unload_t, 0x8 );
