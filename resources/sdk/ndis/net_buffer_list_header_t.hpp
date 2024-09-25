#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"
#include "net_buffer_list_data_t.hpp"

#include "magic/net_buffer_list_header_t.start.hpp"
namespace ndis
{
    // [union _NET_BUFFER_LIST_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union net_buffer_list_header_t                                    
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct ndis::net_buffer_list_data_t net_buffer_list_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetBufferListData
        _m01 union nt::slist_header_t            link;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
                                                                      
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST_HEADER.$", 0x10, true, 0xa8534926a0554ab0 );                     
        SDK_FIXED_SIZE( net_buffer_list_header_t, 0x10 );                     
    };                                                                
};
#include "magic/net_buffer_list_header_t.end.hpp"
SDK_VERIFY( union ndis::net_buffer_list_header_t, 0x10 );
