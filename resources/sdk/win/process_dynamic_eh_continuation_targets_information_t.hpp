#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_dynamic_eh_continuation_targets_information_t.start.hpp"
namespace win
{
    struct process_dynamic_eh_continuation_target_t;

    // [struct _PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_dynamic_eh_continuation_targets_information_t          
    {                                                                     
        using pprocess_dynamic_eh_continuation_target_t = struct win::process_dynamic_eh_continuation_target_t*;                  
                                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                
        _m00 uint16_t                                   number_of_targets;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfTargets
        _m01 pprocess_dynamic_eh_continuation_target_t  targets;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Targets
                                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION.$", 0x10, true, 0x30e37d17b2884132 );                  
        SDK_FIXED_SIZE( process_dynamic_eh_continuation_targets_information_t, 0x10 );                  
    };                                                                    
};
#include "magic/process_dynamic_eh_continuation_targets_information_t.end.hpp"
SDK_VERIFY( struct win::process_dynamic_eh_continuation_targets_information_t, 0x10 );
