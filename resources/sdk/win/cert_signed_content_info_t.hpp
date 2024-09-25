#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cert_signed_content_info_t.start.hpp"
namespace win
{
    // [struct _CERT_SIGNED_CONTENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_signed_content_info_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 struct win::cryptoapi_blob_t             to_be_signed;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ToBeSigned
        _m01 struct win::crypt_algorithm_identifier_t signature_algorithm;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SignatureAlgorithm
        _m02 struct win::crypt_bit_blob_t             signature;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Signature
                                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_SIGNED_CONTENT_INFO.$", 0x40, true, 0xe5b7f5bdf5feefc6 );                    
        SDK_FIXED_SIZE( cert_signed_content_info_t, 0x40 );                    
    };                                                                    
};
#include "magic/cert_signed_content_info_t.end.hpp"
SDK_VERIFY( struct win::cert_signed_content_info_t, 0x40 );
