#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_id_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_attributes_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_cms_signer_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_CMS_SIGNER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_cms_signer_info_t                                               
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 uint32_t                                 dw_version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cert_id_t                    signer_id;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignerId
        _m02 struct win::crypt_algorithm_identifier_t hash_algorithm;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HashAlgorithm
        _m03 struct win::crypt_algorithm_identifier_t hash_encryption_algorithm;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .HashEncryptionAlgorithm
        _m04 struct win::cryptoapi_blob_t             encrypted_hash;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .EncryptedHash
        _m05 struct win::crypt_attributes_t           auth_attrs;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .AuthAttrs
        _m06 struct win::crypt_attributes_t           unauth_attrs;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .UnauthAttrs
                                                                                
        SDK_MAGIC_PROPERTIES( "_CMSG_CMS_SIGNER_INFO.$", 0x90, true, 0x60d78730238c671 );                          
        SDK_FIXED_SIZE( cmsg_cms_signer_info_t, 0x90 );                          
    };                                                                          
};
#include "magic/cmsg_cms_signer_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_cms_signer_info_t, 0x90 );
