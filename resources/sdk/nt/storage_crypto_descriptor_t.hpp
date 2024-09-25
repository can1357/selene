#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_crypto_capability_t.hpp"

#include "magic/storage_crypto_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_CRYPTO_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_crypto_descriptor_t                      
    {                                                       
        using crypto_capabilities_t = sdk::array<struct nt::storage_crypto_capability_t, 1>;                        
                                                            
        // WDK 10                                           
        //                                                  
        _m00 uint32_t               version;                  //{ +0x0000    } | .Version
        _m01 uint32_t               size;                     //{ +0x0004    } | .Size
        _m02 uint32_t               num_keys_supported;       //{ +0x0008    } | .NumKeysSupported
        _m03 uint32_t               num_crypto_capabilities;  //{ +0x000c    } | .NumCryptoCapabilities
        _m04 crypto_capabilities_t  crypto_capabilities;      //{ +0x0010    } | .CryptoCapabilities
                                                            
        SDK_NONVOL_PROPERTIES( "_STORAGE_CRYPTO_DESCRIPTOR.$", 0x0, false, 0xee841abd61a5933c );                        
        SDK_FIXED_SIZE( storage_crypto_descriptor_t, 0x28 );                        
    };                                                      
};
#include "magic/storage_crypto_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_crypto_descriptor_t, 0x28 );
