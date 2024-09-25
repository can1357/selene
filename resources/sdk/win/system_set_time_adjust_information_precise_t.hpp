#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_set_time_adjust_information_precise_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SET_TIME_ADJUST_INFORMATION_PRECISE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_set_time_adjust_information_precise_t
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t time_adjustment;                   //{ +0x0000    +0x0000    +0x0000    } | .TimeAdjustment
        _m01 uint8_t  enable;                            //{ +0x0008    +0x0008    +0x0008    } | .Enable
                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SET_TIME_ADJUST_INFORMATION_PRECISE.$", 0x10, true, 0xd80afdae3f1c8fda );                
        SDK_FIXED_SIZE( system_set_time_adjust_information_precise_t, 0x10 );                
    };                                                 
};
#include "magic/system_set_time_adjust_information_precise_t.end.hpp"
SDK_VERIFY( struct win::system_set_time_adjust_information_precise_t, 0x10 );
