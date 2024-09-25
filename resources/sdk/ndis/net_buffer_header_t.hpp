#pragma once
#include <sdkgen/support_library.hpp>
#include "net_buffer_data_t.hpp"
#include "../nt/slist_header_t.hpp"

#include "magic/net_buffer_header_t.start.hpp"
namespace ndis
{
    // [union _NET_BUFFER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union net_buffer_header_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 struct ndis::net_buffer_data_t net_buffer_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetBufferData
        _m01 union nt::slist_header_t       link;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
                                                            
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_HEADER.$", 0x30, true, 0xaea1e2e6a8f5c062 );                
        SDK_FIXED_SIZE( net_buffer_header_t, 0x30 );                
    };                                                      
};
#include "magic/net_buffer_header_t.end.hpp"
SDK_VERIFY( union ndis::net_buffer_header_t, 0x30 );
