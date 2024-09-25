#pragma once
#include <sdkgen/support_library.hpp>
#include "event_t.hpp"
#include "state_t.hpp"

#include "magic/state_log_t.start.hpp"
namespace hid
{
    // [struct _STATE_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_log_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                            
        _m00 union hid::event_t event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
        _m01 union hid::state_t state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .State
        _m02 uint32_t           depth;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Depth
                                      
        SDK_MAGIC_PROPERTIES( "_STATE_LOG.$", 0xc, true, 0x3e8a93e6407a144b );      
        SDK_FIXED_SIZE( state_log_t, 0xc );      
    };                                
};
#include "magic/state_log_t.end.hpp"
SDK_VERIFY( struct hid::state_log_t, 0xc );
