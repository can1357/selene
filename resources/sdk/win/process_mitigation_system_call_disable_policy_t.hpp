#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_system_call_disable_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_system_call_disable_policy_t
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint32_t flags;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  disallow_win32k_system_calls;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DisallowWin32kSystemCalls
                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m02 uint1_t  audit_disallow_win32k_system_calls;   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AuditDisallowWin32kSystemCalls
                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.$", 0x4, true, 0x383fe16ecfd2ca5 );                                   
        SDK_FIXED_SIZE( process_mitigation_system_call_disable_policy_t, 0x4 );                                   
    };                                                    
};
#include "magic/process_mitigation_system_call_disable_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_system_call_disable_policy_t, 0x4 );
