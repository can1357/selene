#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_policy_id_t.start.hpp"
namespace win
{
    // [struct _CERT_POLICY_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_policy_id_t                        
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t c_cert_policy_element_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCertPolicyElementId
        _m01 char**   rgpsz_cert_policy_element_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszCertPolicyElementId
                                                   
        SDK_MAGIC_PROPERTIES( "_CERT_POLICY_ID.$", 0x10, true, 0x34c0fc52dd56092c );                             
        SDK_FIXED_SIZE( cert_policy_id_t, 0x10 );                             
    };                                             
};
#include "magic/cert_policy_id_t.end.hpp"
SDK_VERIFY( struct win::cert_policy_id_t, 0x10 );
