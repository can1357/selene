#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_key_attributes_info_t.start.hpp"
namespace win
{
    struct cert_private_key_validity_t;

    // [struct _CERT_KEY_ATTRIBUTES_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_key_attributes_info_t                                            
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                       
        _m00 struct win::cryptoapi_blob_t             key_id;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyId
        _m01 struct win::crypt_bit_blob_t             intended_key_usage;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IntendedKeyUsage
        _m02 struct win::cert_private_key_validity_t* p_private_key_usage_period;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pPrivateKeyUsagePeriod
                                                                                 
        SDK_MAGIC_PROPERTIES( "_CERT_KEY_ATTRIBUTES_INFO.$", 0x30, true, 0x3dc1e509d7577545 );                           
        SDK_FIXED_SIZE( cert_key_attributes_info_t, 0x30 );                           
    };                                                                           
};
#include "magic/cert_key_attributes_info_t.end.hpp"
SDK_VERIFY( struct win::cert_key_attributes_info_t, 0x30 );
