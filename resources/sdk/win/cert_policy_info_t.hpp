#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_info_t.start.hpp"
namespace win
{
    struct cert_policy_qualifier_info_t;

    // [struct _CERT_POLICY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_info_t                                                
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 char*                                     psz_policy_identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszPolicyIdentifier
        _m01 uint32_t                                  c_policy_qualifier;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cPolicyQualifier
        _m02 struct win::cert_policy_qualifier_info_t* rg_policy_qualifier;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgPolicyQualifier
                                                                             
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_INFO.$", 0x18, true, 0x64073609c408070 );                      
        SDK_FIXED_SIZE( cert_policy_info_t, 0x18 );                          
    };                                                                       
};
#include "magic/cert_policy_info_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_info_t, 0x18 );
