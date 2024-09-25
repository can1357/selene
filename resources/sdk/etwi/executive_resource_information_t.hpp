#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/executive_resource_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct executive_resource_information_t                               
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint32_t                       release_sampling_rate;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReleaseSamplingRate
        _m02 uint32_t                       contention_sampling_rate;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContentionSamplingRate
        _m03 uint32_t                       number_of_excessive_timeouts;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfExcessiveTimeouts
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION.$", 0x10, true, 0x8e7a7a8fe4d61182 );                              
        SDK_FIXED_SIZE( executive_resource_information_t, 0x10 );                              
    };                                                                    
};
#include "magic/executive_resource_information_t.end.hpp"
SDK_VERIFY( struct etwi::executive_resource_information_t, 0x10 );
