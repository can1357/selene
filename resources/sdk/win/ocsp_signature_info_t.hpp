#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/ocsp_signature_info_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;

    // [struct _OCSP_SIGNATURE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_signature_info_t                                          
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 struct win::crypt_algorithm_identifier_t signature_algorithm;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SignatureAlgorithm
        _m01 struct win::crypt_bit_blob_t             signature;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Signature
        _m02 uint32_t                                 c_cert_encoded;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cCertEncoded
        _m03 struct win::cryptoapi_blob_t*            rg_cert_encoded;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgCertEncoded
                                                                          
        SDK_MAGIC_PROPERTIES( "_OCSP_SIGNATURE_INFO.$", 0x40, true, 0x77866bdaed19938a );                    
        SDK_FIXED_SIZE( ocsp_signature_info_t, 0x40 );                    
    };                                                                    
};
#include "magic/ocsp_signature_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_signature_info_t, 0x40 );
