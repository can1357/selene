#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_config_v1_9_t.start.hpp"
namespace wdf
{
    struct wdftimer_t;

    // [struct _WDF_TIMER_CONFIG_V1_9]
    // => Windows 10 v1607
    //
    struct timer_config_v1_9_t                                                     
    {                                                                              
        // Windows 10 v1607                                                        
        //                                                                         
        _m00 uint32_t                                      size;                     //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdftimer_t*)>* evt_timer_func;           //{ +0x0008    } | .EvtTimerFunc
        _m02 uint32_t                                      period;                   //{ +0x0010    } | .Period
        _m03 uint8_t                                       automatic_serialization;  //{ +0x0014    } | .AutomaticSerialization
        _m04 uint32_t                                      tolerable_delay;          //{ +0x0018    } | .TolerableDelay
                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_TIMER_CONFIG_V1_9.$", 0x0, false, 0x97109a0a844d685b );                        
        SDK_FIXED_SIZE( timer_config_v1_9_t, 0x20 );                               
    };                                                                             
};
#include "magic/timer_config_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::timer_config_v1_9_t, 0x20 );
