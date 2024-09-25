#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/time_fields_t.hpp"

#include "magic/time_zone_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_TIME_ZONE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct time_zone_information_t                   
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 int32_t                  bias;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Bias
        _m01 sdk::array<wchar_t, 32>  standard_name;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .StandardName
        _m02 struct nt::time_fields_t standard_start;  //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .StandardStart
        _m03 int32_t                  standard_bias;   //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .StandardBias
        _m04 sdk::array<wchar_t, 32>  daylight_name;   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .DaylightName
        _m05 struct nt::time_fields_t daylight_start;  //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .DaylightStart
        _m06 int32_t                  daylight_bias;   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DaylightBias
                                                     
        SDK_NONVOL_PROPERTIES( "_RTL_TIME_ZONE_INFORMATION.$", 0xac, true, 0x2a8c701116b6cb4e );               
        SDK_FIXED_SIZE( time_zone_information_t, 0xac );               
    };                                               
};
#include "magic/time_zone_information_t.end.hpp"
SDK_VERIFY( struct rtl::time_zone_information_t, 0xac );
