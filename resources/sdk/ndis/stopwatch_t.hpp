#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stopwatch_t.start.hpp"
namespace ndis
{
    // [class NdisStopwatch]
    // => Windows 10 v1607
    //
    class stopwatch_t                   
    {                                   
        // Windows 10 v1607                   
        //                              
        _m00 int64_t qpc_start_time;      //{ +0x0000    } | .QpcStartTime
        _m01 int64_t qp_frequency;        //{ +0x0008    } | .QpFrequency
        _m02 int64_t qpc_last_stop_time;  //{ +0x0010    } | .QpcLastStopTime
                                        
        SDK_MAGIC_PROPERTIES( "NdisStopwatch.$", 0x0, false, 0xc8eed2d9cab3915d );                   
        SDK_FIXED_SIZE( stopwatch_t, 0x18 );                   
    };                                  
};
#include "magic/stopwatch_t.end.hpp"
SDK_VERIFY( class ndis::stopwatch_t, 0x18 );
