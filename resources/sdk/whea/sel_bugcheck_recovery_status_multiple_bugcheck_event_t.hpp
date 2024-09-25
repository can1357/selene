#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/sel_bugcheck_recovery_status_multiple_bugcheck_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT]
    // => Windows 11
    //
    struct sel_bugcheck_recovery_status_multiple_bugcheck_event_t      
    {                                                                  
        // Windows 11                                                  
        //                                                             
        _m00 struct whea::event_log_entry_t whea_event_log_entry;        //{ +0x0000    } | .WheaEventLogEntry
        _m01 uint8_t                        is_bugcheck_owner;           //{ +0x0020    } | .IsBugcheckOwner
        _m02 uint8_t                        recursion_count;             //{ +0x0021    } | .RecursionCount
        _m03 uint8_t                        is_bugcheck_recovery_owner;  //{ +0x0022    } | .IsBugcheckRecoveryOwner
                                                                       
        SDK_MAGIC_PROPERTIES( "_WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT.$", 0x0, false, 0xfdff7537b855e367 );                           
        SDK_FIXED_SIZE( sel_bugcheck_recovery_status_multiple_bugcheck_event_t, 0x23 );                           
    };                                                                 
};
#include "magic/sel_bugcheck_recovery_status_multiple_bugcheck_event_t.end.hpp"
SDK_VERIFY( struct whea::sel_bugcheck_recovery_status_multiple_bugcheck_event_t, 0x23 );
