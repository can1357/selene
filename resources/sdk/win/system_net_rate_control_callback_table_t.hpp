#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_net_rate_control_callback_table_t.start.hpp"
namespace win
{
    struct system_net_rate_control_context_header_t;

    // [struct _SYSTEM_NET_RATE_CONTROL_CALLBACK_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_net_rate_control_callback_table_t                                 
    {                                                                               
        using psystem_net_rate_control_dispatch_routine_t = sdk::function<int32_t(struct win::system_net_rate_control_context_header_t*)>*;                          
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                          
        _m00 psystem_net_rate_control_dispatch_routine_t  net_rate_control_dispatch;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetRateControlDispatch
                                                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NET_RATE_CONTROL_CALLBACK_TABLE.$", 0x8, true, 0x512b2692e6875594 );                          
        SDK_FIXED_SIZE( system_net_rate_control_callback_table_t, 0x8 );                          
    };                                                                              
};
#include "magic/system_net_rate_control_callback_table_t.end.hpp"
SDK_VERIFY( struct win::system_net_rate_control_callback_table_t, 0x8 );
