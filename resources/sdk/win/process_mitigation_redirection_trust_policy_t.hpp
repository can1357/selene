#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_redirection_trust_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY]
    // => Windows 11
    //
    struct process_mitigation_redirection_trust_policy_t
    {                                                   
        // Windows 11                           
        //                                      
        _m00 uint32_t flags;                              //{ +0x0000    } | .Flags
        _m01 uint1_t  enforce_redirection_trust;          //{ +0x0000@0  } | .EnforceRedirectionTrust
        _m02 uint1_t  audit_redirection_trust;            //{ +0x0000@1  } | .AuditRedirectionTrust
                                                        
        SDK_MAGIC_PROPERTIES( "_PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY.$", 0x0, false, 0xc1c59c3d83e116db );                          
        SDK_FIXED_SIZE( process_mitigation_redirection_trust_policy_t, 0x4 );                          
    };                                                  
};
#include "magic/process_mitigation_redirection_trust_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_redirection_trust_policy_t, 0x4 );
