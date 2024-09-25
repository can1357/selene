#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_system_event_trigger_config_t.start.hpp"
namespace nt
{
    // [struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct custom_system_event_trigger_config_t
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 uint32_t       size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 const wchar_t* trigger_id;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TriggerId
                                               
        SDK_NONVOL_PROPERTIES( "_CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG.$", 0x10, true, 0x208ef24e740e7658 );           
        SDK_FIXED_SIZE( custom_system_event_trigger_config_t, 0x10 );           
    };                                         
};
#include "magic/custom_system_event_trigger_config_t.end.hpp"
SDK_VERIFY( struct nt::custom_system_event_trigger_config_t, 0x10 );
