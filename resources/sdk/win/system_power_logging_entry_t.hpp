#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_power_logging_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POWER_LOGGING_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_logging_entry_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t reason;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Reason
        _m01 uint32_t states;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .States
                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POWER_LOGGING_ENTRY.$", 0x8, true, 0x6a25893ca233f3d2 );       
        SDK_FIXED_SIZE( system_power_logging_entry_t, 0x8 );       
    };                                 
};
#include "magic/system_power_logging_entry_t.end.hpp"
SDK_VERIFY( struct win::system_power_logging_entry_t, 0x8 );
