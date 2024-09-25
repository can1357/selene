#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_system_call_filter_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_system_call_filter_policy_t
    {                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t flags;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint4_t  filter_id;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FilterId
                                                         
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY.$", 0x4, true, 0xfe648a221243647e );          
        SDK_FIXED_SIZE( process_mitigation_system_call_filter_policy_t, 0x4 );          
    };                                                   
};
#include "magic/process_mitigation_system_call_filter_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_system_call_filter_policy_t, 0x4 );
