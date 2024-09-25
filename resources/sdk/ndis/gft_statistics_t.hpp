#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_statistics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_STATISTICS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_statistics_t                                      
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                   //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;                //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 uint32_t                     v_port_id;               //{ +0x000c    +0x000c    +0x000c    } | .VPortId
        _m04 uint64_t                     provider_flow_entry_id;  //{ +0x0010    +0x0010    +0x0010    } | .ProviderFlowEntryId
        _m05 uint64_t                     packets;                 //{ +0x0018    +0x0018    +0x0018    } | .Packets
        _m06 uint64_t                     bytes;                   //{ +0x0020    +0x0020    +0x0020    } | .Bytes
        _m07 uint64_t                     l1_cache_hits;           //{ +0x0028    +0x0028    +0x0028    } | .L1CacheHits
        _m08 uint64_t                     l2_cache_hits;           //{ +0x0030    +0x0030    +0x0030    } | .L2CacheHits
        _m09 uint64_t                     l3_cache_hits;           //{ +0x0038    +0x0038    +0x0038    } | .L3CacheHits
        _m10 uint64_t                     l1_cache_misses;         //{ +0x0040    +0x0040    +0x0040    } | .L1CacheMisses
        _m11 uint64_t                     l2_cache_misses;         //{ +0x0048    +0x0048    +0x0048    } | .L2CacheMisses
        _m12 uint64_t                     l3_cache_misses;         //{ +0x0050    +0x0050    +0x0050    } | .L3CacheMisses
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_STATISTICS.$", 0x58, true, 0x956ec1035cfd8314 );                       
        SDK_FIXED_SIZE( gft_statistics_t, 0x58 );                       
    };                                                           
};
#include "magic/gft_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::gft_statistics_t, 0x58 );
