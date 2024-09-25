#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_leap_second_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_LEAP_SECOND_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_leap_second_information_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint8_t  enabled;               //{ +0x0000    +0x0000    +0x0000    } | .Enabled
        _m01 uint32_t flags;                 //{ +0x0004    +0x0004    +0x0004    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_LEAP_SECOND_INFORMATION.$", 0x8, true, 0x7136b699dd21c095 );        
        SDK_FIXED_SIZE( system_leap_second_information_t, 0x8 );        
    };                                     
};
#include "magic/system_leap_second_information_t.end.hpp"
SDK_VERIFY( struct win::system_leap_second_information_t, 0x8 );
