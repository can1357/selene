#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gft_byte_counter_value_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_BYTE_COUNTER_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_byte_counter_value_t
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t bytes;         //{ +0x0000    +0x0000    +0x0000    } | .Bytes
        _m01 int64_t  last_update;   //{ +0x0008    +0x0008    +0x0008    } | .LastUpdate
                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_BYTE_COUNTER_VALUE.$", 0x10, true, 0x6ce5b5f719c69b7b );            
        SDK_FIXED_SIZE( gft_byte_counter_value_t, 0x10 );            
    };                             
};
#include "magic/gft_byte_counter_value_t.end.hpp"
SDK_VERIFY( struct ndis::gft_byte_counter_value_t, 0x10 );
