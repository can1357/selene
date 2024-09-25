#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transport_header_offset_t.start.hpp"
namespace ndis
{
    // [struct _TRANSPORT_HEADER_OFFSET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transport_header_offset_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t protocol_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProtocolType
        _m01 uint16_t header_offset;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeaderOffset
                                    
        SDK_MAGIC_PROPERTIES( "_TRANSPORT_HEADER_OFFSET.$", 0x4, true, 0x5bf9e9fb5adf6718 );              
        SDK_FIXED_SIZE( transport_header_offset_t, 0x4 );              
    };                              
};
#include "magic/transport_header_offset_t.end.hpp"
SDK_VERIFY( struct ndis::transport_header_offset_t, 0x4 );
