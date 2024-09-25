#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_hash_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_HASH_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_hash_info_t                                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 struct win::crypt_algorithm_identifier_t hash_algorithm;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgorithm
        _m01 struct win::cryptoapi_blob_t             hash;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Hash
                                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_HASH_INFO.$", 0x28, true, 0x7484ca337172662c );               
        SDK_FIXED_SIZE( crypt_hash_info_t, 0x28 );                   
    };                                                               
};
#include "magic/crypt_hash_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_hash_info_t, 0x28 );
