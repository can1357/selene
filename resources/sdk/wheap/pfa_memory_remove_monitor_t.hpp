#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "../whea/pfa_remove_trigger_t.hpp"

#include "magic/pfa_memory_remove_monitor_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_PFA_MEMORY_REMOVE_MONITOR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pfa_memory_remove_monitor_t                            
    {                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 struct whea::event_log_entry_t  whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 enum whea::pfa_remove_trigger_t remove_trigger;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RemoveTrigger
        _m02 uint32_t                        time_in_list;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TimeInList
        _m03 uint32_t                        error_count;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ErrorCount
        _m04 uint32_t                        page;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Page
                                                                  
        SDK_NONVOL_PROPERTIES( "_WHEAP_PFA_MEMORY_REMOVE_MONITOR.$", 0x30, true, 0x8eaab8bc45028497 );                     
        SDK_FIXED_SIZE( pfa_memory_remove_monitor_t, 0x30 );                     
    };                                                            
};
#include "magic/pfa_memory_remove_monitor_t.end.hpp"
SDK_VERIFY( struct wheap::pfa_memory_remove_monitor_t, 0x30 );
