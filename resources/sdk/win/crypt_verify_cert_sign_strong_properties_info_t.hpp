#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_verify_cert_sign_strong_properties_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_verify_cert_sign_strong_properties_info_t                         
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                         
        _m00 struct win::cryptoapi_blob_t cert_sign_hash_cng_alg_prop_data;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CertSignHashCNGAlgPropData
        _m01 struct win::cryptoapi_blob_t cert_issuer_pub_key_bit_length_prop_data;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CertIssuerPubKeyBitLengthPropData
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_VERIFY_CERT_SIGN_STRONG_PROPERTIES_INFO.$", 0x20, true, 0x2eb2617fc876de27 );                                         
        SDK_FIXED_SIZE( crypt_verify_cert_sign_strong_properties_info_t, 0x20 );                                         
    };                                                                             
};
#include "magic/crypt_verify_cert_sign_strong_properties_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_verify_cert_sign_strong_properties_info_t, 0x20 );
