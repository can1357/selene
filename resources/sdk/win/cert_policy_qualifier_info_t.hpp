#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_policy_qualifier_info_t.start.hpp"
namespace win
{
    // [struct _CERT_POLICY_QUALIFIER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_qualifier_info_t                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                        
        _m00 char*                        psz_policy_qualifier_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszPolicyQualifierId
        _m01 struct win::cryptoapi_blob_t qualifier;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Qualifier
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_QUALIFIER_INFO.$", 0x18, true, 0x5f31f493576a4a4f );                        
        SDK_FIXED_SIZE( cert_policy_qualifier_info_t, 0x18 );                        
    };                                                            
};
#include "magic/cert_policy_qualifier_info_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_qualifier_info_t, 0x18 );
