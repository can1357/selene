#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/device_drv_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_DEVICE_DRV_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_drv_event_t                                    
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           function;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Function
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_DEVICE_DRV_EVENT.$", 0x40, true, 0x1861412299e6a0b6 );                     
        SDK_FIXED_SIZE( device_drv_event_t, 0x40 );                     
    };                                                           
};
#include "magic/device_drv_event_t.end.hpp"
SDK_VERIFY( struct wheap::device_drv_event_t, 0x40 );
