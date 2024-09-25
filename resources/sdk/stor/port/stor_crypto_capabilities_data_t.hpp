#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_crypto_capability_t.hpp"

#include "magic/stor_crypto_capabilities_data_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_CRYPTO_CAPABILITIES_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_crypto_capabilities_data_t                  
    {                                                       
        using crypto_capabilities_t = sdk::array<struct stor::port::stor_crypto_capability_t, 1>;                        
                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint32_t               version;                  //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               size;                     //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint16_t               num_keys_supported;       //{ +0x0008    +0x0008    +0x0008    } | .NumKeysSupported
        _m03 uint16_t               num_crypto_capabilities;  //{ +0x000a    +0x000a    +0x000a    } | .NumCryptoCapabilities
        _m04 crypto_capabilities_t  crypto_capabilities;      //{ +0x000c    +0x000c    +0x000c    } | .CryptoCapabilities
                                                            
        SDK_MAGIC_PROPERTIES( "_STOR_CRYPTO_CAPABILITIES_DATA.$", 0x20, true, 0xa55c0f62d4e06a9e );                        
        SDK_FIXED_SIZE( stor_crypto_capabilities_data_t, 0x20 );                        
    };                                                      
};
#include "magic/stor_crypto_capabilities_data_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_crypto_capabilities_data_t, 0x20 );
