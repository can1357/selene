#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_leap_second_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_LEAP_SECOND_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_leap_second_information_t
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;                  //{ +0x0000    +0x0000    +0x0000    } | .Flags
                                            
        SDK_MAGIC_PROPERTIES( "_PROCESS_LEAP_SECOND_INFORMATION.$", 0x8, true, 0x1a209ff331f501a1 );      
        SDK_FIXED_SIZE( process_leap_second_information_t, 0x8 );      
    };                                      
};
#include "magic/process_leap_second_information_t.end.hpp"
SDK_VERIFY( struct win::process_leap_second_information_t, 0x8 );
