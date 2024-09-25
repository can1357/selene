#pragma once
#include <sdkgen/support_library.hpp>
#include "state_handler_type_t.hpp"

#include "magic/state_handler_t.start.hpp"
namespace power
{
    // [struct POWER_STATE_HANDLER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_handler_t                             
    {                                                  
        using penter_state_handler_t = sdk::function<int32_t(void*, sdk::function<int32_t(void*)>*, void*, int32_t, volatile int32_t*)>*;         
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                             
        _m00 enum power::state_handler_type_t type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                          rtc_wake;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RtcWake
        _m02 penter_state_handler_t           handler;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handler
        _m03 void*                            context;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                                       
        SDK_MAGIC_PROPERTIES( "POWER_STATE_HANDLER.$", 0x18, true, 0x8bee94e7b8a19abf );         
        SDK_FIXED_SIZE( state_handler_t, 0x18 );         
    };                                                 
};
#include "magic/state_handler_t.end.hpp"
SDK_VERIFY( struct power::state_handler_t, 0x18 );
