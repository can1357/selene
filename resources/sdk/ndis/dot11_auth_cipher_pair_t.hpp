#pragma once
#include <sdkgen/support_library.hpp>
#include "dot11_auth_algorithm_t.hpp"
#include "dot11_cipher_algorithm_t.hpp"

#include "magic/dot11_auth_cipher_pair_t.start.hpp"
namespace ndis
{
    // [struct DOT11_AUTH_CIPHER_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_auth_cipher_pair_t                             
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 enum ndis::dot11_auth_algorithm_t   auth_algo_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AuthAlgoId
        _m01 enum ndis::dot11_cipher_algorithm_t cipher_algo_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CipherAlgoId
                                                                
        SDK_MAGIC_PROPERTIES( "DOT11_AUTH_CIPHER_PAIR.$", 0x8, true, 0x4b5f01a945bc9c65 );               
        SDK_FIXED_SIZE( dot11_auth_cipher_pair_t, 0x8 );               
    };                                                          
};
#include "magic/dot11_auth_cipher_pair_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_auth_cipher_pair_t, 0x8 );
