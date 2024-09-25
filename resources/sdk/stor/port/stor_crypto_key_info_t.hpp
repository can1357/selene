#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_crypto_key_info_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_CRYPTO_KEY_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_crypto_key_info_t
    {                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t version;     //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;        //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t key_index;   //{ +0x0008    +0x0008    +0x0008    } | .KeyIndex
        _m03 uint64_t tweak;       //{ +0x0010    +0x0010    +0x0010    } | .Tweak
                                 
        SDK_MAGIC_PROPERTIES( "_STOR_CRYPTO_KEY_INFO.$", 0x18, true, 0x7ce4e9c112e5684a );          
        SDK_FIXED_SIZE( stor_crypto_key_info_t, 0x18 );          
    };                           
};
#include "magic/stor_crypto_key_info_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_crypto_key_info_t, 0x18 );
