#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_block_type_t.hpp"
#include "../nt/slist_header_t.hpp"

#include "magic/pkt_pool_hdr_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PKT_POOL_HDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkt_pool_hdr_t                            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 nt::list_entry_t             list;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 int64_t                      time_stamp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m02 union nt::slist_header_t     free_list;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeList
        _m03 enum ndis::pool_block_type_t state;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .State
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_PKT_POOL_HDR.$", 0x40, true, 0x1796a0f58b1f4e2 );           
        SDK_FIXED_SIZE( pkt_pool_hdr_t, 0x40 );           
    };                                               
};
#include "magic/pkt_pool_hdr_t.end.hpp"
SDK_VERIFY( struct ndis::pkt_pool_hdr_t, 0x40 );
