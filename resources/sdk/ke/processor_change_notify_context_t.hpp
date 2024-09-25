#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/processor_number_t.hpp"
#include "processor_change_notify_state_t.hpp"

#include "magic/processor_change_notify_context_t.start.hpp"
namespace ke
{
    // [struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_change_notify_context_t           
    {                                                  
        enum class u0_state_t : int32_t                
        {                                              
            start_notify =    0x0,                       // WDK 10
            complete_notify = 0x1,                       // WDK 10
            failure_notify =  0x2,                       // WDK 10
        };                                             
                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                             
        _m00 int32_t                       state;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t                      nt_number;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NtNumber
        _m02 int32_t                       status;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m03 struct nt::processor_number_t proc_number;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcNumber
                                                       
        SDK_NONVOL_PROPERTIES( "_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT.$", 0x10, true, 0x5e75d8a7eb48266d );            
        SDK_FIXED_SIZE( processor_change_notify_context_t, 0x10 );            
    };                                                 
};
#include "magic/processor_change_notify_context_t.end.hpp"
SDK_VERIFY( struct ke::processor_change_notify_context_t, 0x10 );
