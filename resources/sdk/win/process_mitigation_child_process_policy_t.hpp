#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_child_process_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_child_process_policy_t  
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t flags;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  no_child_process_creation;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NoChildProcessCreation
        _m02 uint1_t  audit_no_child_process_creation;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AuditNoChildProcessCreation
        _m03 uint1_t  allow_secure_process_creation;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .AllowSecureProcessCreation
                                                      
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_CHILD_PROCESS_POLICY.$", 0x4, true, 0xe159b6cf0536097c );                                
        SDK_FIXED_SIZE( process_mitigation_child_process_policy_t, 0x4 );                                
    };                                                
};
#include "magic/process_mitigation_child_process_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_child_process_policy_t, 0x4 );
