#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/touch_prediction_parameters_t.start.hpp"
namespace tag
{
    // [struct tagTouchPredictionParameters]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct touch_prediction_parameters_t  
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_latency;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwLatency
        _m02 uint32_t dw_sample_time;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwSampleTime
        _m03 uint32_t b_use_hw_time_stamp;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bUseHWTimeStamp
                                          
        SDK_MAGIC_PROPERTIES( "tagTouchPredictionParameters.$", 0x10, true, 0xaebc28e8ea98c38a );                    
        SDK_FIXED_SIZE( touch_prediction_parameters_t, 0x10 );                    
    };                                    
};
#include "magic/touch_prediction_parameters_t.end.hpp"
SDK_VERIFY( struct tag::touch_prediction_parameters_t, 0x10 );
