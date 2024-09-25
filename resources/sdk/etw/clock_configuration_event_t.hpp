#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/perfinfo_dynamic_tick_disable_reason_t.hpp"

#include "magic/clock_configuration_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CLOCK_CONFIGURATION_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clock_configuration_event_t                                       
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                   
        _m00 uint32_t                                         known_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KnownType
        _m01 uint32_t                                         capabilities;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Capabilities
        _m02 enum win::perfinfo_dynamic_tick_disable_reason_t disable_reason;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DisableReason
                                                                             
        SDK_MAGIC_PROPERTIES( "_ETW_CLOCK_CONFIGURATION_EVENT.$", 0xc, true, 0xf44543345ea6729c );               
        SDK_FIXED_SIZE( clock_configuration_event_t, 0xc );                  
    };                                                                       
};
#include "magic/clock_configuration_event_t.end.hpp"
SDK_VERIFY( struct etw::clock_configuration_event_t, 0xc );
