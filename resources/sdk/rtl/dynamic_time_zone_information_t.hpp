#pragma once
#include <sdkgen/support_library.hpp>
#include "time_zone_information_t.hpp"

#include "magic/dynamic_time_zone_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_time_zone_information_t                                      
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                      
        _m00 struct rtl::time_zone_information_t tzi;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tzi
        _m01 sdk::array<wchar_t, 128>            time_zone_key_name;              //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .TimeZoneKeyName
        _m02 uint8_t                             dynamic_daylight_time_disabled;  //{ +0x01ac    +0x01ac    +0x01ac    +0x01ac    } | .DynamicDaylightTimeDisabled
                                                                                
        SDK_MAGIC_PROPERTIES( "_RTL_DYNAMIC_TIME_ZONE_INFORMATION.$", 0x1b0, true, 0x520e3f2e55461be6 );                               
        SDK_FIXED_SIZE( dynamic_time_zone_information_t, 0x1b0 );                               
    };                                                                          
};
#include "magic/dynamic_time_zone_information_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_time_zone_information_t, 0x1b0 );
