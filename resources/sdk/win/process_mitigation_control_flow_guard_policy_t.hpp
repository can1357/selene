#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_control_flow_guard_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_control_flow_guard_policy_t
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t flags;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_control_flow_guard;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableControlFlowGuard
                                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m02 uint1_t  enable_export_suppression;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .EnableExportSuppression
        _m03 uint1_t  strict_mode;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .StrictMode
                                                         
        // Windows 11                           
        //                                      
        _m04 uint1_t  enable_xfg;                          //{ +0x0000@3  } | .EnableXfg
        _m05 uint1_t  enable_xfg_audit_mode;               //{ +0x0000@4  } | .EnableXfgAuditMode
                                                         
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY.$", 0x4, true, 0x7fc9bd86cc5f2302 );                          
        SDK_FIXED_SIZE( process_mitigation_control_flow_guard_policy_t, 0x4 );                          
    };                                                   
};
#include "magic/process_mitigation_control_flow_guard_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_control_flow_guard_policy_t, 0x4 );
