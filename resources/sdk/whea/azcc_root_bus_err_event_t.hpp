#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/azcc_root_bus_err_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_AZCC_ROOT_BUS_ERR_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct azcc_root_bus_err_event_t                             
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        max_bus_count_passed;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxBusCountPassed
        _m02 uint8_t                        invalid_bus_msr;       //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .InvalidBusMSR
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_AZCC_ROOT_BUS_ERR_EVENT.$", 0x22, true, 0x15b5c6748c3f544e );                     
        SDK_FIXED_SIZE( azcc_root_bus_err_event_t, 0x22 );                     
    };                                                           
};
#include "magic/azcc_root_bus_err_event_t.end.hpp"
SDK_VERIFY( struct whea::azcc_root_bus_err_event_t, 0x22 );
