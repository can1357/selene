#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"

#include "magic/cert_key_usage_restriction_info_t.start.hpp"
namespace win
{
    struct cert_policy_id_t;

    // [struct _CERT_KEY_USAGE_RESTRICTION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_key_usage_restriction_info_t                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 uint32_t                      c_cert_policy_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCertPolicyId
        _m01 struct win::cert_policy_id_t* rg_cert_policy_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgCertPolicyId
        _m02 struct win::crypt_bit_blob_t  restricted_key_usage;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RestrictedKeyUsage
                                                                
        SDK_MAGIC_PROPERTIES( "_CERT_KEY_USAGE_RESTRICTION_INFO.$", 0x28, true, 0x922dbef4b28cc3f4 );                     
        SDK_FIXED_SIZE( cert_key_usage_restriction_info_t, 0x28 );                     
    };                                                          
};
#include "magic/cert_key_usage_restriction_info_t.end.hpp"
SDK_VERIFY( struct win::cert_key_usage_restriction_info_t, 0x28 );
