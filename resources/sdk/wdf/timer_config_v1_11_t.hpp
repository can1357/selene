#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_config_v1_11_t.start.hpp"
namespace wdf
{
    struct wdftimer_t;

    // [struct _WDF_TIMER_CONFIG_V1_11]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_config_v1_11_t                                                    
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                         
        _m00 uint32_t                                      size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdftimer_t*)>* evt_timer_func;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtTimerFunc
        _m02 uint32_t                                      period;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Period
        _m03 uint8_t                                       automatic_serialization;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AutomaticSerialization
        _m04 uint32_t                                      tolerable_delay;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TolerableDelay
                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_TIMER_CONFIG_V1_11.$", 0x20, true, 0xa589c7e7907cfedd );                        
        SDK_FIXED_SIZE( timer_config_v1_11_t, 0x20 );                              
    };                                                                             
};
#include "magic/timer_config_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::timer_config_v1_11_t, 0x20 );
