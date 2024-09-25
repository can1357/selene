#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/error_cleared_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ERROR_CLEARED_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_cleared_event_t                                 
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       ep_index;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EpIndex
        _m02 uint32_t                       bank;                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Bank
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_ERROR_CLEARED_EVENT.$", 0x28, true, 0x7bd0d6a152457491 );                     
        SDK_FIXED_SIZE( error_cleared_event_t, 0x28 );                     
    };                                                           
};
#include "magic/error_cleared_event_t.end.hpp"
SDK_VERIFY( struct wheap::error_cleared_event_t, 0x28 );
