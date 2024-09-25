#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sl_appx_cache_value_descriptor_t.start.hpp"
namespace win
{
    // [struct _SL_APPX_CACHE_VALUE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sl_appx_cache_value_descriptor_t      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 sdk::array<uint8_t, 32> hashed_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashedName
        _m01 uint64_t                expiration;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Expiration
        _m02 uint32_t                data_size;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DataSize
        _m03 sdk::array<uint8_t, 1>  data;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Data
                                                 
        SDK_MAGIC_PROPERTIES( "_SL_APPX_CACHE_VALUE_DESCRIPTOR.$", 0x30, true, 0xb95a94cf7d71d75b );            
        SDK_FIXED_SIZE( sl_appx_cache_value_descriptor_t, 0x30 );            
    };                                           
};
#include "magic/sl_appx_cache_value_descriptor_t.end.hpp"
SDK_VERIFY( struct win::sl_appx_cache_value_descriptor_t, 0x30 );
