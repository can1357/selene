#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_failure_actions_flag_t.start.hpp"
namespace win
{
    // [struct _SERVICE_FAILURE_ACTIONS_FLAG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_failure_actions_flag_t                    
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                   
        _m00 int32_t f_failure_actions_on_non_crash_failures;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fFailureActionsOnNonCrashFailures
                                                             
        SDK_MAGIC_PROPERTIES( "_SERVICE_FAILURE_ACTIONS_FLAG.$", 0x4, true, 0x415d579cc3bb6fcd );                                        
        SDK_FIXED_SIZE( service_failure_actions_flag_t, 0x4 );                                        
    };                                                       
};
#include "magic/service_failure_actions_flag_t.end.hpp"
SDK_VERIFY( struct win::service_failure_actions_flag_t, 0x4 );
