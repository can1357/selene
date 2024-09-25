#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"
#include "../whea/error_record_header_t.hpp"

#include "magic/attempt_recovery_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ATTEMPT_RECOVERY_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct attempt_recovery_event_t                                    
    {                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 struct whea::event_log_entry_t     whea_event_log_entry;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::error_record_header_t error_header;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorHeader
        _m02 uint8_t                            architectural_recovery;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ArchitecturalRecovery
        _m03 uint8_t                            pshed_recovery;          //{ +0x00a1    +0x00a1    +0x00a1    +0x00a1    } | .PshedRecovery
        _m04 int32_t                            status;                  //{ +0x00a2    +0x00a2    +0x00a2    +0x00a2    } | .Status
                                                                       
        SDK_NONVOL_PROPERTIES( "_WHEAP_ATTEMPT_RECOVERY_EVENT.$", 0xa6, true, 0x2f53f09c682decb7 );                       
        SDK_FIXED_SIZE( attempt_recovery_event_t, 0xa6 );                       
    };                                                                 
};
#include "magic/attempt_recovery_event_t.end.hpp"
SDK_VERIFY( struct wheap::attempt_recovery_event_t, 0xa6 );
