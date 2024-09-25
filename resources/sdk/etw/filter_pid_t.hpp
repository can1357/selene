#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_pid_t.start.hpp"
namespace etw
{
    // [struct _ETW_FILTER_PID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_pid_t                    
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 uint32_t                count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<uint32_t, 8> pids;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Pids
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_FILTER_PID.$", 0x24, true, 0xc1e2c3705930b888 );      
        SDK_FIXED_SIZE( filter_pid_t, 0x24 );      
    };                                     
};
#include "magic/filter_pid_t.end.hpp"
SDK_VERIFY( struct etw::filter_pid_t, 0x24 );
