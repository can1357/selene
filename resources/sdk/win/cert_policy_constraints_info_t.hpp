#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_constraints_info_t.start.hpp"
namespace win
{
    // [struct _CERT_POLICY_CONSTRAINTS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_constraints_info_t                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                  
        _m00 int32_t  f_require_explicit_policy;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fRequireExplicitPolicy
        _m01 uint32_t dw_require_explicit_policy_skip_certs;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRequireExplicitPolicySkipCerts
        _m02 int32_t  f_inhibit_policy_mapping;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fInhibitPolicyMapping
        _m03 uint32_t dw_inhibit_policy_mapping_skip_certs;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwInhibitPolicyMappingSkipCerts
                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_CONSTRAINTS_INFO.$", 0x10, true, 0x3eaa236aae688cf3 );                                      
        SDK_FIXED_SIZE( cert_policy_constraints_info_t, 0x10 );                                      
    };                                                      
};
#include "magic/cert_policy_constraints_info_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_constraints_info_t, 0x10 );
