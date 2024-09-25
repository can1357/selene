#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/binary_data_t.start.hpp"
namespace ndis
{
    // [struct BINARY_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binary_data_t     
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 void*    buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                             
        SDK_MAGIC_PROPERTIES( "BINARY_DATA.$", 0x10, true, 0xc97b62990abe0206 );       
        SDK_FIXED_SIZE( binary_data_t, 0x10 );       
    };                       
};
#include "magic/binary_data_t.end.hpp"
SDK_VERIFY( struct ndis::binary_data_t, 0x10 );
