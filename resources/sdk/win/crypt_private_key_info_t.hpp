#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_private_key_info_t.start.hpp"
namespace win
{
    struct crypt_attributes_t;

    // [struct _CRYPT_PRIVATE_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_private_key_info_t                                
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m00 uint32_t                                 version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct win::crypt_algorithm_identifier_t algorithm;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Algorithm
        _m02 struct win::cryptoapi_blob_t             private_key;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrivateKey
        _m03 struct win::crypt_attributes_t*          p_attributes;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pAttributes
                                                                   
        SDK_MAGIC_PROPERTIES( "_CRYPT_PRIVATE_KEY_INFO.$", 0x38, true, 0xd5118bcf8ac93239 );             
        SDK_FIXED_SIZE( crypt_private_key_info_t, 0x38 );             
    };                                                             
};
#include "magic/crypt_private_key_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_private_key_info_t, 0x38 );
