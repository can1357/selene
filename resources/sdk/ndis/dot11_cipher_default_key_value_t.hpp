#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_cipher_algorithm_t.hpp"

#include "magic/dot11_cipher_default_key_value_t.start.hpp"
namespace ndis
{
    // [struct DOT11_CIPHER_DEFAULT_KEY_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_cipher_default_key_value_t                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 struct ndis::object_header_t        header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            u_key_index;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uKeyIndex
        _m02 enum ndis::dot11_cipher_algorithm_t algorithm_id;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AlgorithmId
        _m03 sdk::array<uint8_t, 6>              mac_addr;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MacAddr
        _m04 uint8_t                             b_delete;       //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .bDelete
        _m05 uint8_t                             b_static;       //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .bStatic
        _m06 uint16_t                            us_key_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .usKeyLength
        _m07 sdk::array<uint8_t, 1>              uc_key;         //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .ucKey
                                                               
        SDK_MAGIC_PROPERTIES( "DOT11_CIPHER_DEFAULT_KEY_VALUE.$", 0x18, true, 0x5a6129fb4670babd );              
        SDK_FIXED_SIZE( dot11_cipher_default_key_value_t, 0x18 );              
    };                                                         
};
#include "magic/dot11_cipher_default_key_value_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_cipher_default_key_value_t, 0x18 );
