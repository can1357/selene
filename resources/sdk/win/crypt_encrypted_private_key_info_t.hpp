#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_encrypted_private_key_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ENCRYPTED_PRIVATE_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_encrypted_private_key_info_t                               
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                  
        _m00 struct win::crypt_algorithm_identifier_t encryption_algorithm;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EncryptionAlgorithm
        _m01 struct win::cryptoapi_blob_t             encrypted_private_key;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncryptedPrivateKey
                                                                            
        SDK_MAGIC_PROPERTIES( "_CRYPT_ENCRYPTED_PRIVATE_KEY_INFO.$", 0x28, true, 0x1d635257deedad53 );                      
        SDK_FIXED_SIZE( crypt_encrypted_private_key_info_t, 0x28 );                      
    };                                                                      
};
#include "magic/crypt_encrypted_private_key_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_encrypted_private_key_info_t, 0x28 );
