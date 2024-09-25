#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_side_channel_isolation_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_side_channel_isolation_policy_t
    {                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint32_t flags;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  smt_branch_target_isolation;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SmtBranchTargetIsolation
        _m02 uint1_t  isolate_security_domain;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsolateSecurityDomain
        _m03 uint1_t  disable_page_combine;                    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DisablePageCombine
        _m04 uint1_t  speculative_store_bypass_disable;        //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SpeculativeStoreBypassDisable
                                                             
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY.$", 0x4, true, 0x68dbe374c3008a61 );                                 
        SDK_FIXED_SIZE( process_mitigation_side_channel_isolation_policy_t, 0x4 );                                 
    };                                                       
};
#include "magic/process_mitigation_side_channel_isolation_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_side_channel_isolation_policy_t, 0x4 );
