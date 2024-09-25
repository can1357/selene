#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_logger_t.start.hpp"
namespace etw
{
    // [struct _ETW_SYSTEM_LOGGER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_logger_t      
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t logger_id;   //{ +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m01 uint8_t clock_type;  //{ +0x0001    +0x0001    +0x0001    } | .ClockType
                                
        SDK_MAGIC_PROPERTIES( "_ETW_SYSTEM_LOGGER.$", 0x2, true, 0xcbaa2a1b2932aaf8 );           
        SDK_FIXED_SIZE( system_logger_t, 0x2 );           
    };                          
};
#include "magic/system_logger_t.end.hpp"
SDK_VERIFY( struct etw::system_logger_t, 0x2 );
