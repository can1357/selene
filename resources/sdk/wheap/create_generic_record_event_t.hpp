#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/create_generic_record_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_CREATE_GENERIC_RECORD_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_generic_record_event_t                         
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           error;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Error
        _m02 uint32_t                       entry_count;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EntryCount
        _m03 int32_t                        status;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Status
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_CREATE_GENERIC_RECORD_EVENT.$", 0x48, true, 0x986276140cf040c1 );                     
        SDK_FIXED_SIZE( create_generic_record_event_t, 0x48 );                     
    };                                                           
};
#include "magic/create_generic_record_event_t.end.hpp"
SDK_VERIFY( struct wheap::create_generic_record_event_t, 0x48 );
