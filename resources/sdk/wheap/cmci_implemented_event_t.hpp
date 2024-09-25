#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/cmci_implemented_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_CMCI_IMPLEMENTED_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cmci_implemented_event_t                              
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        cmci_available;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CmciAvailable
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_CMCI_IMPLEMENTED_EVENT.$", 0x21, true, 0x5b57d1b133e4e67 );                     
        SDK_FIXED_SIZE( cmci_implemented_event_t, 0x21 );                     
    };                                                           
};
#include "magic/cmci_implemented_event_t.end.hpp"
SDK_VERIFY( struct wheap::cmci_implemented_event_t, 0x21 );
