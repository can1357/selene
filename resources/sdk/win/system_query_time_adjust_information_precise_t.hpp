#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_query_time_adjust_information_precise_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_query_time_adjust_information_precise_t
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t time_adjustment;                     //{ +0x0000    +0x0000    +0x0000    } | .TimeAdjustment
        _m01 uint64_t time_increment;                      //{ +0x0008    +0x0008    +0x0008    } | .TimeIncrement
        _m02 uint8_t  enable;                              //{ +0x0010    +0x0010    +0x0010    } | .Enable
                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE.$", 0x18, true, 0x7cadbeb45613b206 );                
        SDK_FIXED_SIZE( system_query_time_adjust_information_precise_t, 0x18 );                
    };                                                   
};
#include "magic/system_query_time_adjust_information_precise_t.end.hpp"
SDK_VERIFY( struct win::system_query_time_adjust_information_precise_t, 0x18 );
