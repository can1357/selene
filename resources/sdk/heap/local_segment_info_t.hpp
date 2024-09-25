#pragma once
#include <sdkgen/support_library.hpp>
#include "bucket_counters_t.hpp"
#include "../nt/slist_header_t.hpp"

#include "magic/local_segment_info_t.start.hpp"
namespace heap
{
    struct local_data_t;
    struct subsegment_t;

    // [struct _HEAP_LOCAL_SEGMENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct local_segment_info_t                                       
    {                                                                 
        using cached_items_t = sdk::array<struct heap::subsegment_t volatile*, 16>;                  
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 struct heap::local_data_t*             local_data;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LocalData
        _m01 struct heap::subsegment_t volatile*    active_subsegment;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActiveSubsegment
        _m02 cached_items_t                         cached_items;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CachedItems
        _m03 union nt::slist_header_t               s_list_header;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .SListHeader
        _m04 volatile union heap::bucket_counters_t counters;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Counters
        _m05 uint32_t                               last_op_sequence;   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LastOpSequence
        _m06 uint16_t                               bucket_index;       //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .BucketIndex
        _m07 uint16_t                               last_used;          //{ +0x00ae    +0x00ae    +0x00ae    +0x00ae    } | .LastUsed
        _m08 uint16_t                               no_thrash_count;    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .NoThrashCount
                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_LOCAL_SEGMENT_INFO.$", 0xc0, true, 0x6d45ab8e47934386 );                  
        SDK_FIXED_SIZE( local_segment_info_t, 0xc0 );                  
    };                                                                
};
#include "magic/local_segment_info_t.end.hpp"
SDK_VERIFY( struct heap::local_segment_info_t, 0xc0 );
