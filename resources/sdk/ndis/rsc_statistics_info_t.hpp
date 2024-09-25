#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/rsc_statistics_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RSC_STATISTICS_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsc_statistics_info_t                           
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 struct ndis::object_header_t header;            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                     coalesced_pkts;    //{ +0x0008    +0x0008    +0x0008    } | .CoalescedPkts
        _m02 uint64_t                     coalesced_octets;  //{ +0x0010    +0x0010    +0x0010    } | .CoalescedOctets
        _m03 uint64_t                     coalesce_events;   //{ +0x0018    +0x0018    +0x0018    } | .CoalesceEvents
        _m04 uint64_t                     aborts;            //{ +0x0020    +0x0020    +0x0020    } | .Aborts
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_RSC_STATISTICS_INFO.$", 0x28, true, 0x15c37c2b0230c552 );                 
        SDK_FIXED_SIZE( rsc_statistics_info_t, 0x28 );                 
    };                                                     
};
#include "magic/rsc_statistics_info_t.end.hpp"
SDK_VERIFY( struct ndis::rsc_statistics_info_t, 0x28 );
