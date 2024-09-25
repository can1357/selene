#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cert_public_key_info_t.start.hpp"
namespace win
{
    // [struct _CERT_PUBLIC_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_public_key_info_t                                
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                       
        _m00 struct win::crypt_algorithm_identifier_t algorithm;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Algorithm
        _m01 struct win::crypt_bit_blob_t             public_key;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PublicKey
                                                                 
        SDK_MAGIC_PROPERTIES( "_CERT_PUBLIC_KEY_INFO.$", 0x30, true, 0xc47b56ce2b3f6bd );           
        SDK_FIXED_SIZE( cert_public_key_info_t, 0x30 );           
    };                                                           
};
#include "magic/cert_public_key_info_t.end.hpp"
SDK_VERIFY( struct win::cert_public_key_info_t, 0x30 );
