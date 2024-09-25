#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_byte_array_t.start.hpp"
namespace ndis
{
    // [struct DOT11_BYTE_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_byte_array_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_of_bytes;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfBytes
        _m02 uint32_t                     u_total_num_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfBytes
        _m03 sdk::array<uint8_t, 1>       uc_buffer;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ucBuffer
                                                               
        SDK_MAGIC_PROPERTIES( "DOT11_BYTE_ARRAY.$", 0x10, true, 0x254f4a4e93210e8b );                     
        SDK_FIXED_SIZE( dot11_byte_array_t, 0x10 );                     
    };                                                         
};
#include "magic/dot11_byte_array_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_byte_array_t, 0x10 );
