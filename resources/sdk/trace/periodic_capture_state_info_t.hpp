#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/periodic_capture_state_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_PERIODIC_CAPTURE_STATE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct periodic_capture_state_info_t                 
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint32_t capture_state_frequency_in_seconds;  //{ +0x0000    +0x0000    +0x0000    } | .CaptureStateFrequencyInSeconds
        _m01 uint16_t provider_count;                      //{ +0x0004    +0x0004    +0x0004    } | .ProviderCount
                                                         
        SDK_MAGIC_PROPERTIES( "_TRACE_PERIODIC_CAPTURE_STATE_INFO.$", 0x8, true, 0x30ec0db9e7e6b8dc );                                   
        SDK_FIXED_SIZE( periodic_capture_state_info_t, 0x8 );                                   
    };                                                   
};
#include "magic/periodic_capture_state_info_t.end.hpp"
SDK_VERIFY( struct trace::periodic_capture_state_info_t, 0x8 );
