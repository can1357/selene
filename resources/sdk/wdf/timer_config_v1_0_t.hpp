#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_config_v1_0_t.start.hpp"
namespace wdf
{
    struct wdftimer_t;

    // [struct _WDF_TIMER_CONFIG_V1_0]
    // => Windows 10 v1607
    //
    struct timer_config_v1_0_t                                                     
    {                                                                              
        // Windows 10 v1607                                                        
        //                                                                         
        _m00 uint32_t                                      size;                     //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdftimer_t*)>* evt_timer_func;           //{ +0x0008    } | .EvtTimerFunc
        _m02 int32_t                                       period;                   //{ +0x0010    } | .Period
        _m03 uint8_t                                       automatic_serialization;  //{ +0x0014    } | .AutomaticSerialization
                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_TIMER_CONFIG_V1_0.$", 0x0, false, 0x61e28f0ba9df6ad4 );                        
        SDK_FIXED_SIZE( timer_config_v1_0_t, 0x18 );                               
    };                                                                             
};
#include "magic/timer_config_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::timer_config_v1_0_t, 0x18 );
