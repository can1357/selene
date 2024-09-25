#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_dynamic_eh_continuation_target_t.start.hpp"
namespace win
{
    // [struct _PROCESS_DYNAMIC_EH_CONTINUATION_TARGET]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_dynamic_eh_continuation_target_t
    {                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t target_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetAddress
        _m01 uint64_t flags;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                   
        SDK_NONVOL_PROPERTIES( "_PROCESS_DYNAMIC_EH_CONTINUATION_TARGET.$", 0x10, true, 0x3548f20ba59c9a32 );               
        SDK_FIXED_SIZE( process_dynamic_eh_continuation_target_t, 0x10 );               
    };                                             
};
#include "magic/process_dynamic_eh_continuation_target_t.end.hpp"
SDK_VERIFY( struct win::process_dynamic_eh_continuation_target_t, 0x10 );
