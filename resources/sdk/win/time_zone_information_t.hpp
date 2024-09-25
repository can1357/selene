#pragma once
#include <sdkgen/support_library.hpp>
#include "systemtime_t.hpp"

#include "magic/time_zone_information_t.start.hpp"
namespace win
{
    // [struct _TIME_ZONE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct time_zone_information_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 int32_t                  bias;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bias
        _m01 sdk::array<wchar_t, 32>  standard_name;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StandardName
        _m02 struct win::systemtime_t standard_date;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .StandardDate
        _m03 int32_t                  standard_bias;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .StandardBias
        _m04 sdk::array<wchar_t, 32>  daylight_name;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DaylightName
        _m05 struct win::systemtime_t daylight_date;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .DaylightDate
        _m06 int32_t                  daylight_bias;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DaylightBias
                                                    
        SDK_MAGIC_PROPERTIES( "_TIME_ZONE_INFORMATION.$", 0xac, true, 0x837e05a8da8b6459 );              
        SDK_FIXED_SIZE( time_zone_information_t, 0xac );              
    };                                              
};
#include "magic/time_zone_information_t.end.hpp"
SDK_VERIFY( struct win::time_zone_information_t, 0xac );
