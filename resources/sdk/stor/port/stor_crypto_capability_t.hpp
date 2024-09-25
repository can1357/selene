#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_crypto_key_size_t.hpp"
#include "stor_crypto_algorithm_id_t.hpp"

#include "magic/stor_crypto_capability_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_CRYPTO_CAPABILITY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_crypto_capability_t                                              
    {                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 uint32_t                                    version;                  //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                    size;                     //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint16_t                                    crypto_capability_index;  //{ +0x0008    +0x0008    +0x0008    } | .CryptoCapabilityIndex
        _m03 uint16_t                                    data_unit_size_bitmask;   //{ +0x000a    +0x000a    +0x000a    } | .DataUnitSizeBitmask
        _m04 enum stor::port::stor_crypto_algorithm_id_t algorithm_id;             //{ +0x000c    +0x000c    +0x000c    } | .AlgorithmId
        _m05 enum stor::port::stor_crypto_key_size_t     key_size;                 //{ +0x0010    +0x0010    +0x0010    } | .KeySize
                                                                                 
        SDK_MAGIC_PROPERTIES( "_STOR_CRYPTO_CAPABILITY.$", 0x14, true, 0xa7e678cd9700fb92 );                        
        SDK_FIXED_SIZE( stor_crypto_capability_t, 0x14 );                        
    };                                                                           
};
#include "magic/stor_crypto_capability_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_crypto_capability_t, 0x14 );
