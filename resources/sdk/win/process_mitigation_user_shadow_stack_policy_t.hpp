#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_user_shadow_stack_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_user_shadow_stack_policy_t     
    {                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m00 uint32_t flags;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_user_shadow_stack;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableUserShadowStack
                                                             
        // Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m02 uint1_t  audit_user_shadow_stack;                 //{ +0x0000@1  +0x0000@1  } | .AuditUserShadowStack
        _m03 uint1_t  set_context_ip_validation;               //{ +0x0000@2  +0x0000@2  } | .SetContextIpValidation
        _m04 uint1_t  audit_set_context_ip_validation;         //{ +0x0000@3  +0x0000@3  } | .AuditSetContextIpValidation
        _m05 uint1_t  enable_user_shadow_stack_strict_mode;    //{ +0x0000@4  +0x0000@4  } | .EnableUserShadowStackStrictMode
        _m06 uint1_t  block_non_cet_binaries;                  //{ +0x0000@5  +0x0000@5  } | .BlockNonCetBinaries
        _m07 uint1_t  block_non_cet_binaries_non_ehcont;       //{ +0x0000@6  +0x0000@6  } | .BlockNonCetBinariesNonEhcont
        _m08 uint1_t  audit_block_non_cet_binaries;            //{ +0x0000@7  +0x0000@7  } | .AuditBlockNonCetBinaries
        _m09 uint1_t  cet_dynamic_apis_out_of_proc_only;       //{ +0x0000@8  +0x0000@8  } | .CetDynamicApisOutOfProcOnly
        _m10 uint1_t  set_context_ip_validation_relaxed_mode;  //{ +0x0000@9  +0x0000@9  } | .SetContextIpValidationRelaxedMode
                                                             
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY.$", 0x4, true, 0x506e1e3e1eea6a69 );                                       
        SDK_FIXED_SIZE( process_mitigation_user_shadow_stack_policy_t, 0x4 );                                       
    };                                                       
};
#include "magic/process_mitigation_user_shadow_stack_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_user_shadow_stack_policy_t, 0x4 );
