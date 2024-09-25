#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_auth_cipher_pair_t.hpp"

#include "magic/dot11_auth_cipher_pair_list_t.start.hpp"
namespace ndis
{
    // [struct DOT11_AUTH_CIPHER_PAIR_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_auth_cipher_pair_list_t                         
    {                                                            
        using auth_cipher_pairs_t = sdk::array<struct ndis::dot11_auth_cipher_pair_t, 1>;                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_of_entries;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                     u_total_num_of_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 auth_cipher_pairs_t          auth_cipher_pairs;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AuthCipherPairs
                                                                 
        SDK_MAGIC_PROPERTIES( "DOT11_AUTH_CIPHER_PAIR_LIST.$", 0x14, true, 0x1e005baebe9e11d8 );                       
        SDK_FIXED_SIZE( dot11_auth_cipher_pair_list_t, 0x14 );                       
    };                                                           
};
#include "magic/dot11_auth_cipher_pair_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_auth_cipher_pair_list_t, 0x14 );
