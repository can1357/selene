#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_start_reason_t.start.hpp"
namespace win
{
    // [struct _SERVICE_START_REASON]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_start_reason_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t dw_reason;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwReason
                                 
        SDK_MAGIC_PROPERTIES( "_SERVICE_START_REASON.$", 0x4, true, 0x60bab8860e94298d );          
        SDK_FIXED_SIZE( service_start_reason_t, 0x4 );          
    };                           
};
#include "magic/service_start_reason_t.end.hpp"
SDK_VERIFY( struct win::service_start_reason_t, 0x4 );
