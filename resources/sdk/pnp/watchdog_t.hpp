#pragma once
#include <sdkgen/support_library.hpp>
#include "watchdog_type_t.hpp"

namespace nt { struct wdt_handle_t; }

#include "magic/watchdog_t.start.hpp"
namespace pnp
{
    // [struct _PNP_WATCHDOG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct watchdog_t                                         
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 uint64_t                  watchdog_start;          //{ +0x0000    +0x0000    +0x0000    } | .WatchdogStart
        _m01 struct nt::wdt_handle_t*  watchdog_timer;          //{ +0x0008    +0x0008    +0x0008    } | .WatchdogTimer
        _m02 enum pnp::watchdog_type_t watchdog_context_type;   //{ +0x0010    +0x0010    +0x0010    } | .WatchdogContextType
        _m03 void*                     watchdog_context;        //{ +0x0018    +0x0018    +0x0018    } | .WatchdogContext
                                                              
        // Windows 10 v2004, Windows 10 v20H2                       
        //                                                    
        _m04 uint8_t                   trigger_event_logged;    //{ +0x0020    +0x0020    } | .TriggerEventLogged
                                                              
        // Windows 11                                         
        //                                                    
        _m05 uint8_t                   first_chance_triggered;  //{ +0x0020    } | .FirstChanceTriggered
        _m06 uint8_t                   telemetry_generated;     //{ +0x0021    } | .TelemetryGenerated
        _m07 nt::unicode_view          driver_to_blame;         //{ +0x0028    } | .DriverToBlame
        _m08 sdk::array<wchar_t, 1>    driver_to_blame_buffer;  //{ +0x0038    } | .DriverToBlameBuffer
                                                              
        SDK_MAGIC_PROPERTIES( "_PNP_WATCHDOG.$", 0x28, true, 0xc41685028ce1cebd );                       
        SDK_DYNAMIC_SIZE( watchdog_t );                       
    };                                                        
};
#include "magic/watchdog_t.end.hpp"
