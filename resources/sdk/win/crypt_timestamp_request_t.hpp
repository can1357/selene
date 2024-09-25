#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_timestamp_request_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CRYPT_TIMESTAMP_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_request_t                                    
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 uint32_t                                 dw_version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::crypt_algorithm_identifier_t hash_algorithm;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashAlgorithm
        _m02 struct win::cryptoapi_blob_t             hashed_message;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HashedMessage
        _m03 char*                                    psz_tsa_policy_id;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pszTSAPolicyId
        _m04 struct win::cryptoapi_blob_t             nonce;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Nonce
        _m05 int32_t                                  f_cert_req;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .fCertReq
        _m06 uint32_t                                 c_extension;        //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .cExtension
        _m07 struct win::cert_extension_t*            rg_extension;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .rgExtension
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_REQUEST.$", 0x58, true, 0x60c4ba85a644f551 );                  
        SDK_FIXED_SIZE( crypt_timestamp_request_t, 0x58 );                  
    };                                                                  
};
#include "magic/crypt_timestamp_request_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_request_t, 0x58 );
