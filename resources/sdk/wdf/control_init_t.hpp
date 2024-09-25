#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/control_init_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct ControlInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_init_t                                                         
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                        
        _m00 sdk::function<void(struct wdf::wdfdevice_t*)>* shutdown_notification;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ShutdownNotification
        _m01 uint8_t                                        flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                                                  
        SDK_MAGIC_PROPERTIES( "ControlInit.$", 0x10, true, 0x4abcfb3a2c660cb1 );                      
        SDK_FIXED_SIZE( control_init_t, 0x10 );                                   
    };                                                                            
};
#include "magic/control_init_t.end.hpp"
SDK_VERIFY( struct wdf::control_init_t, 0x10 );
