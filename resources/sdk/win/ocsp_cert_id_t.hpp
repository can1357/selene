#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/ocsp_cert_id_t.start.hpp"
namespace win
{
    // [struct _OCSP_CERT_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_cert_id_t                                              
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 struct win::crypt_algorithm_identifier_t hash_algorithm;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgorithm
        _m01 struct win::cryptoapi_blob_t             issuer_name_hash;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IssuerNameHash
        _m02 struct win::cryptoapi_blob_t             issuer_key_hash;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IssuerKeyHash
        _m03 struct win::cryptoapi_blob_t             serial_number;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SerialNumber
                                                                       
        SDK_MAGIC_PROPERTIES( "_OCSP_CERT_ID.$", 0x48, true, 0xbd3355665c8de95a );                 
        SDK_FIXED_SIZE( ocsp_cert_id_t, 0x48 );                        
    };                                                                 
};
#include "magic/ocsp_cert_id_t.end.hpp"
SDK_VERIFY( struct win::ocsp_cert_id_t, 0x48 );
