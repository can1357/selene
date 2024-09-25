#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/azcc_root_bus_list_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_AZCC_ROOT_BUS_LIST_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct azcc_root_bus_list_event_t                            
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       root_bus_count;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RootBusCount
        _m02 sdk::array<uint32_t, 8>        root_buses;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .RootBuses
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_AZCC_ROOT_BUS_LIST_EVENT.$", 0x44, true, 0xf359a95c6114a388 );                     
        SDK_FIXED_SIZE( azcc_root_bus_list_event_t, 0x44 );                     
    };                                                           
};
#include "magic/azcc_root_bus_list_event_t.end.hpp"
SDK_VERIFY( struct whea::azcc_root_bus_list_event_t, 0x44 );
