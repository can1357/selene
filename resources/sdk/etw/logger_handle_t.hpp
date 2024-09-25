#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logger_handle_t.start.hpp"
namespace etw
{
    // [struct _ETW_LOGGER_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logger_handle_t                 
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint8_t dereference_and_leave;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DereferenceAndLeave
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_LOGGER_HANDLE.$", 0x1, true, 0xec10ebdff4399b85 );                      
        SDK_FIXED_SIZE( logger_handle_t, 0x1 );                      
    };                                     
};
#include "magic/logger_handle_t.end.hpp"
SDK_VERIFY( struct etw::logger_handle_t, 0x1 );
