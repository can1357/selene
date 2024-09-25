#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/time_fields_t.hpp"
#include "../nt/timezone_change_event_t.hpp"
#include "../rtl/dynamic_time_zone_information_t.hpp"

#include "magic/timezone_state_t.start.hpp"
namespace ex
{
    // [struct _EX_TIMEZONE_STATE]
    // => Windows 11
    //
    struct timezone_state_t                                                                     
    {                                                                                           
        // Windows 11                                                                           
        //                                                                                      
        _m00 struct rtl::dynamic_time_zone_information_t time_zone_information;                   //{ +0x0000    } | .TimeZoneInformation
        _m01 uint32_t                                    current_time_zone_id;                    //{ +0x01b0    } | .CurrentTimeZoneId
        _m02 int32_t                                     last_time_zone_bias;                     //{ +0x01b4    } | .LastTimeZoneBias
        _m03 int64_t                                     time_zone_bias;                          //{ +0x01b8    } | .TimeZoneBias
        _m04 struct nt::timezone_change_event_t          time_zone;                               //{ +0x01c0    } | .TimeZone
        _m05 struct nt::timezone_change_event_t          century;                                 //{ +0x0260    } | .Century
        _m06 struct nt::timezone_change_event_t          next_year;                               //{ +0x0300    } | .NextYear
        _m07 int32_t                                     ok_to_time_zone_refresh;                 //{ +0x03a0    } | .OkToTimeZoneRefresh
        _m08 int64_t                                     next_century_time_in_utc;                //{ +0x03a8    } | .NextCenturyTimeInUTC
        _m09 struct nt::time_fields_t                    next_century_time_fields_in_local_time;  //{ +0x03b0    } | .NextCenturyTimeFieldsInLocalTime
        _m10 int64_t                                     next_year_time_in_utc;                   //{ +0x03c0    } | .NextYearTimeInUTC
        _m11 struct nt::time_fields_t                    next_year_time_fields_in_local_time;     //{ +0x03c8    } | .NextYearTimeFieldsInLocalTime
        _m12 int16_t                                     last_dynamic_time_zone_year;             //{ +0x03d8    } | .LastDynamicTimeZoneYear
        _m13 int64_t                                     next_system_cutover_in_utc;              //{ +0x03e0    } | .NextSystemCutoverInUTC
        _m14 uint32_t                                    refresh_failures;                        //{ +0x03e8    } | .RefreshFailures
                                                                                                
        SDK_MAGIC_PROPERTIES( "_EX_TIMEZONE_STATE.$", 0x0, false, 0x921a2ca98b22c39f );                                       
        SDK_FIXED_SIZE( timezone_state_t, 0x3f0 );                                              
    };                                                                                          
};
#include "magic/timezone_state_t.end.hpp"
SDK_VERIFY( struct ex::timezone_state_t, 0x3f0 );
