#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_data_length_t.start.hpp"
namespace ndis
{
    // [union _NET_BUFFER_DATA_LENGTH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union net_buffer_data_length_t   
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t data_length;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataLength
        _m01 uint64_t st_data_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .stDataLength
                                     
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_DATA_LENGTH.$", 0x8, true, 0x4bf2fd43a38d3760 );               
        SDK_FIXED_SIZE( net_buffer_data_length_t, 0x8 );               
    };                               
};
#include "magic/net_buffer_data_length_t.end.hpp"
SDK_VERIFY( union ndis::net_buffer_data_length_t, 0x8 );
