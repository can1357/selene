#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/action_t.hpp"
#include "../nt/system_power_state_t.hpp"

#include "magic/perfinfo_po_session_callout_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PO_SESSION_CALLOUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_po_session_callout_t                    
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 enum power::action_t          system_action;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemAction
        _m01 enum nt::system_power_state_t min_system_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MinSystemState
        _m02 uint32_t                      flags;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                      power_state_task;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PowerStateTask
                                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PO_SESSION_CALLOUT.$", 0x10, true, 0xfe503b76e45597e1 );                 
        SDK_FIXED_SIZE( perfinfo_po_session_callout_t, 0x10 );                 
    };                                                      
};
#include "magic/perfinfo_po_session_callout_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_po_session_callout_t, 0x10 );
