#pragma once
#include <sdkgen/support_library.hpp>
#include "state_handler_type_t.hpp"

#include "magic/state_notify_handler_t.start.hpp"
namespace power
{
    // [struct POWER_STATE_NOTIFY_HANDLER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_notify_handler_t                   
    {                                               
        using penter_state_notify_handler_t = sdk::function<int32_t(enum power::state_handler_type_t, void*, uint8_t)>*;        
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 penter_state_notify_handler_t  handler;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handler
        _m01 void*                          context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
                                                    
        SDK_MAGIC_PROPERTIES( "POWER_STATE_NOTIFY_HANDLER.$", 0x10, true, 0xf625f5c2b383bd9 );        
        SDK_FIXED_SIZE( state_notify_handler_t, 0x10 );        
    };                                              
};
#include "magic/state_notify_handler_t.end.hpp"
SDK_VERIFY( struct power::state_notify_handler_t, 0x10 );
