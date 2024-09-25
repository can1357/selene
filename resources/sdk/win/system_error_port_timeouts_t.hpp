#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_error_port_timeouts_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ERROR_PORT_TIMEOUTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_error_port_timeouts_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t start_timeout;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartTimeout
        _m01 uint32_t comm_timeout;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CommTimeout
                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ERROR_PORT_TIMEOUTS.$", 0x8, true, 0xfe76934b9cc0fa9c );              
        SDK_FIXED_SIZE( system_error_port_timeouts_t, 0x8 );              
    };                                 
};
#include "magic/system_error_port_timeouts_t.end.hpp"
SDK_VERIFY( struct win::system_error_port_timeouts_t, 0x8 );
