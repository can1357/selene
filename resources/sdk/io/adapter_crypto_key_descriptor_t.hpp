#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_crypto_key_descriptor_t.start.hpp"
namespace io
{
    // [struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct adapter_crypto_key_descriptor_t                
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                version;               //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                size;                  //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                crypto_index;          //{ +0x0008    +0x0008    +0x0008    } | .CryptoIndex
        _m03 uint32_t                algorithm_id;          //{ +0x000c    +0x000c    +0x000c    } | .AlgorithmId
        _m04 uint32_t                data_unit_size;        //{ +0x0010    +0x0010    +0x0010    } | .DataUnitSize
        _m05 uint32_t                key_size;              //{ +0x0014    +0x0014    +0x0014    } | .KeySize
        _m06 sdk::array<uint8_t, 32> key_hash;              //{ +0x0018    +0x0018    +0x0018    } | .KeyHash
        _m07 void*                   key_virtual_address;   //{ +0x0038    +0x0038    +0x0038    } | .KeyVirtualAddress
        _m08 int64_t                 key_physical_address;  //{ +0x0040    +0x0040    +0x0040    } | .KeyPhysicalAddress
                                                          
        SDK_MAGIC_PROPERTIES( "_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.$", 0x48, true, 0x12c1c0e7e28d360e );                     
        SDK_FIXED_SIZE( adapter_crypto_key_descriptor_t, 0x48 );                     
    };                                                    
};
#include "magic/adapter_crypto_key_descriptor_t.end.hpp"
SDK_VERIFY( struct io::adapter_crypto_key_descriptor_t, 0x48 );
