#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_set_time_adjust_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SET_TIME_ADJUST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_set_time_adjust_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t time_adjustment;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeAdjustment
        _m01 uint8_t  enable;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Enable
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SET_TIME_ADJUST_INFORMATION.$", 0x8, true, 0x334cc836e7d80185 );                
        SDK_FIXED_SIZE( system_set_time_adjust_information_t, 0x8 );                
    };                                         
};
#include "magic/system_set_time_adjust_information_t.end.hpp"
SDK_VERIFY( struct win::system_set_time_adjust_information_t, 0x8 );
