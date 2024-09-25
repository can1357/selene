#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cert_policies_info_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cert_supported_algorithm_info_t.start.hpp"
namespace win
{
    // [struct _CERT_SUPPORTED_ALGORITHM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_supported_algorithm_info_t                                   
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                   
        _m00 struct win::crypt_algorithm_identifier_t algorithm;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Algorithm
        _m01 struct win::crypt_bit_blob_t             intended_key_usage;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IntendedKeyUsage
        _m02 struct win::cert_policies_info_t         intended_cert_policies;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IntendedCertPolicies
                                                                             
        SDK_MAGIC_PROPERTIES( "_CERT_SUPPORTED_ALGORITHM_INFO.$", 0x40, true, 0xba66190f6407354a );                       
        SDK_FIXED_SIZE( cert_supported_algorithm_info_t, 0x40 );                       
    };                                                                       
};
#include "magic/cert_supported_algorithm_info_t.end.hpp"
SDK_VERIFY( struct win::cert_supported_algorithm_info_t, 0x40 );
