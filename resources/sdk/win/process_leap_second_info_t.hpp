#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_leap_second_info_t.start.hpp"
namespace win
{
    // [struct _PROCESS_LEAP_SECOND_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_leap_second_info_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;           //{ +0x0000    +0x0000    +0x0000    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_PROCESS_LEAP_SECOND_INFO.$", 0x8, true, 0x9952895102963c1d );      
        SDK_FIXED_SIZE( process_leap_second_info_t, 0x8 );      
    };                               
};
#include "magic/process_leap_second_info_t.end.hpp"
SDK_VERIFY( struct win::process_leap_second_info_t, 0x8 );
