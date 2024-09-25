#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/sel_bugcheck_progress_t.start.hpp"
namespace whea
{
    // [struct _WHEA_SEL_BUGCHECK_PROGRESS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sel_bugcheck_progress_t                                     
    {                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                             
        _m00 struct whea::event_log_entry_t whea_event_log_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint32_t                       bug_check_code;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BugCheckCode
        _m02 uint32_t                       bug_check_progress_summary;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .BugCheckProgressSummary
                                                                       
        SDK_NONVOL_PROPERTIES( "_WHEA_SEL_BUGCHECK_PROGRESS.$", 0x28, true, 0x3cea8f9b6b8dad17 );                           
        SDK_FIXED_SIZE( sel_bugcheck_progress_t, 0x28 );                           
    };                                                                 
};
#include "magic/sel_bugcheck_progress_t.end.hpp"
SDK_VERIFY( struct whea::sel_bugcheck_progress_t, 0x28 );
