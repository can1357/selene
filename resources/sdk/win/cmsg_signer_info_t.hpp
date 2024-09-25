#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_attributes_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_signer_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_SIGNER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_signer_info_t                                                   
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 uint32_t                                 dw_version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cryptoapi_blob_t             issuer;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Issuer
        _m02 struct win::cryptoapi_blob_t             serial_number;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SerialNumber
        _m03 struct win::crypt_algorithm_identifier_t hash_algorithm;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HashAlgorithm
        _m04 struct win::crypt_algorithm_identifier_t hash_encryption_algorithm;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HashEncryptionAlgorithm
        _m05 struct win::cryptoapi_blob_t             encrypted_hash;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EncryptedHash
        _m06 struct win::crypt_attributes_t           auth_attrs;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AuthAttrs
        _m07 struct win::crypt_attributes_t           unauth_attrs;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .UnauthAttrs
                                                                                
        SDK_MAGIC_PROPERTIES( "_CMSG_SIGNER_INFO.$", 0x88, true, 0x29c17e395483a92f );                          
        SDK_FIXED_SIZE( cmsg_signer_info_t, 0x88 );                             
    };                                                                          
};
#include "magic/cmsg_signer_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_signer_info_t, 0x88 );
