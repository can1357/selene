#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/time_profile_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_TIME_PROFILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct time_profile_information_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint32_t                       profile_interval;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProfileInterval
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_TIME_PROFILE_INFORMATION.$", 0x8, true, 0x4e878e9a4f47512f );                              
        SDK_FIXED_SIZE( time_profile_information_t, 0x8 );                              
    };                                                                    
};
#include "magic/time_profile_information_t.end.hpp"
SDK_VERIFY( struct etwi::time_profile_information_t, 0x8 );
