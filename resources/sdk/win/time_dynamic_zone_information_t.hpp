#pragma once
#include <sdkgen/support_library.hpp>
#include "systemtime_t.hpp"

#include "magic/time_dynamic_zone_information_t.start.hpp"
namespace win
{
    // [struct _TIME_DYNAMIC_ZONE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct time_dynamic_zone_information_t                           
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                           
        _m00 int32_t                  bias;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bias
        _m01 sdk::array<wchar_t, 32>  standard_name;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StandardName
        _m02 struct win::systemtime_t standard_date;                   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .StandardDate
        _m03 int32_t                  standard_bias;                   //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .StandardBias
        _m04 sdk::array<wchar_t, 32>  daylight_name;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DaylightName
        _m05 struct win::systemtime_t daylight_date;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .DaylightDate
        _m06 int32_t                  daylight_bias;                   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DaylightBias
        _m07 sdk::array<wchar_t, 128> time_zone_key_name;              //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .TimeZoneKeyName
        _m08 uint8_t                  dynamic_daylight_time_disabled;  //{ +0x01ac    +0x01ac    +0x01ac    +0x01ac    } | .DynamicDaylightTimeDisabled
                                                                     
        SDK_MAGIC_PROPERTIES( "_TIME_DYNAMIC_ZONE_INFORMATION.$", 0x1b0, true, 0x643a904a27a5437d );                               
        SDK_FIXED_SIZE( time_dynamic_zone_information_t, 0x1b0 );                               
    };                                                               
};
#include "magic/time_dynamic_zone_information_t.end.hpp"
SDK_VERIFY( struct win::time_dynamic_zone_information_t, 0x1b0 );
