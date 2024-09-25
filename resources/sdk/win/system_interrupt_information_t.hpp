#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_interrupt_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_INTERRUPT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_interrupt_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t context_switches;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextSwitches
        _m01 uint32_t dpc_count;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DpcCount
        _m02 uint32_t dpc_rate;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcRate
        _m03 uint32_t time_increment;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeIncrement
        _m04 uint32_t dpc_bypass_count;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DpcBypassCount
        _m05 uint32_t apc_bypass_count;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ApcBypassCount
                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_INTERRUPT_INFORMATION.$", 0x18, true, 0x2a990830d11f5c4a );                 
        SDK_FIXED_SIZE( system_interrupt_information_t, 0x18 );                 
    };                                   
};
#include "magic/system_interrupt_information_t.end.hpp"
SDK_VERIFY( struct win::system_interrupt_information_t, 0x18 );
