#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_mapping_t.start.hpp"
namespace win
{
    // [struct _CERT_POLICY_MAPPING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_mapping_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                   
        _m00 char* psz_issuer_domain_policy;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszIssuerDomainPolicy
        _m01 char* psz_subject_domain_policy;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszSubjectDomainPolicy
                                             
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_MAPPING.$", 0x10, true, 0xa2079fc11d3c6fda );                          
        SDK_FIXED_SIZE( cert_policy_mapping_t, 0x10 );                          
    };                                       
};
#include "magic/cert_policy_mapping_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_mapping_t, 0x10 );
