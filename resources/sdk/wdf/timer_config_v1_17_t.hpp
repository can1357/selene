#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_config_v1_17_t.start.hpp"
namespace wdf
{
    struct wdftimer_t;

    // [struct _WDF_TIMER_CONFIG_V1_17]
    // => Windows 10 v1607
    //
    struct timer_config_v1_17_t                                                      
    {                                                                                
        // Windows 10 v1607                                                          
        //                                                                           
        _m00 uint32_t                                      size;                       //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdftimer_t*)>* evt_timer_func;             //{ +0x0008    } | .EvtTimerFunc
        _m02 uint32_t                                      period;                     //{ +0x0010    } | .Period
        _m03 uint8_t                                       automatic_serialization;    //{ +0x0014    } | .AutomaticSerialization
        _m04 uint32_t                                      tolerable_delay;            //{ +0x0018    } | .TolerableDelay
        _m05 uint8_t                                       use_high_resolution_timer;  //{ +0x0020    } | .UseHighResolutionTimer
                                                                                     
        SDK_MAGIC_PROPERTIES( "_WDF_TIMER_CONFIG_V1_17.$", 0x0, false, 0xe7cbe72afe9054e );                          
        SDK_FIXED_SIZE( timer_config_v1_17_t, 0x28 );                                
    };                                                                               
};
#include "magic/timer_config_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::timer_config_v1_17_t, 0x28 );
