#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_call_time_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CALL_TIME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_call_time_information_t         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 uint32_t               length;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t               total_calls;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalCalls
        _m02 sdk::array<int64_t, 1> time_of_calls;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeOfCalls
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CALL_TIME_INFORMATION.$", 0x10, true, 0x81c4ed1f884276d6 );              
        SDK_FIXED_SIZE( system_call_time_information_t, 0x10 );              
    };                                            
};
#include "magic/system_call_time_information_t.end.hpp"
SDK_VERIFY( struct win::system_call_time_information_t, 0x10 );
