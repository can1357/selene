#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_crypto_key_size_t.hpp"
#include "storage_crypto_algorithm_id_t.hpp"

#include "magic/storage_crypto_capability_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_CRYPTO_CAPABILITY]
    // => WDK 10 (NV)
    //
    struct storage_crypto_capability_t                                      
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                               version;                  //{ +0x0000    } | .Version
        _m01 uint32_t                               size;                     //{ +0x0004    } | .Size
        _m02 uint32_t                               crypto_capability_index;  //{ +0x0008    } | .CryptoCapabilityIndex
        _m03 enum nt::storage_crypto_algorithm_id_t algorithm_id;             //{ +0x000c    } | .AlgorithmId
        _m04 enum nt::storage_crypto_key_size_t     key_size;                 //{ +0x0010    } | .KeySize
        _m05 uint32_t                               data_unit_size_bitmask;   //{ +0x0014    } | .DataUnitSizeBitmask
                                                                            
        SDK_NONVOL_PROPERTIES( "_STORAGE_CRYPTO_CAPABILITY.$", 0x0, false, 0x79b16c519c85f01 );                        
        SDK_FIXED_SIZE( storage_crypto_capability_t, 0x18 );                        
    };                                                                      
};
#include "magic/storage_crypto_capability_t.end.hpp"
SDK_VERIFY( struct nt::storage_crypto_capability_t, 0x18 );
