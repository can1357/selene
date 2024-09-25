#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/leap_second_data_t.start.hpp"
namespace nt
{
    // [struct _LEAP_SECOND_DATA]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct leap_second_data_t               
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint8_t                enabled;  //{ +0x0000    +0x0000    +0x0000    } | .Enabled
        _m01 uint32_t               count;    //{ +0x0004    +0x0004    +0x0004    } | .Count
        _m02 sdk::array<int64_t, 1> data;     //{ +0x0008    +0x0008    +0x0008    } | .Data
                                            
        SDK_MAGIC_PROPERTIES( "_LEAP_SECOND_DATA.$", 0x10, true, 0x123a6a9bc12657fb );        
        SDK_DYNAMIC_SIZE( leap_second_data_t );        
    };                                      
};
#include "magic/leap_second_data_t.end.hpp"
