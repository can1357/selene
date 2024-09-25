#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_dynamic_code_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_dynamic_code_policy_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t flags;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  prohibit_dynamic_code;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ProhibitDynamicCode
        _m02 uint1_t  allow_thread_opt_out;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AllowThreadOptOut
                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m03 uint1_t  allow_remote_downgrade;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AllowRemoteDowngrade
        _m04 uint1_t  audit_prohibit_dynamic_code;   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AuditProhibitDynamicCode
                                                   
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_DYNAMIC_CODE_POLICY.$", 0x4, true, 0x18b1e500ac1a99c7 );                            
        SDK_FIXED_SIZE( process_mitigation_dynamic_code_policy_t, 0x4 );                            
    };                                             
};
#include "magic/process_mitigation_dynamic_code_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_dynamic_code_policy_t, 0x4 );
