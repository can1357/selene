#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_tracker_table_t.start.hpp"
namespace nt
{
    struct pool_limit_table_entry_t;

    // [struct _POOL_TRACKER_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_tracker_table_t                                    
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                         
        _m00 volatile int32_t                     key;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 uint64_t                             non_paged_bytes;   //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .NonPagedBytes
        _m02 varuint_t                            non_paged_allocs;  //{ +0x0004    +0x0010    +0x0010    +0x0010    } | .NonPagedAllocs
        _m03 varuint_t                            non_paged_frees;   //{ +0x0008    +0x0018    +0x0018    +0x0018    } | .NonPagedFrees
        _m04 uint64_t                             paged_bytes;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PagedBytes
        _m05 varuint_t                            paged_allocs;      //{ +0x0018    +0x0028    +0x0028    +0x0028    } | .PagedAllocs
        _m06 varuint_t                            paged_frees;       //{ +0x001c    +0x0030    +0x0030    +0x0030    } | .PagedFrees
                                                                   
        // Windows 11                                              
        //                                                         
        _m07 sdk::array<int64_t, 2>               available_limit;   //{ +0x0038    } | .AvailableLimit
        _m08 struct nt::pool_limit_table_entry_t* limit_info;        //{ +0x0048    } | .LimitInfo
                                                                   
        SDK_MAGIC_PROPERTIES( "_POOL_TRACKER_TABLE.$", 0x38, true, 0xefa12f7086dc14c4 );                 
        SDK_DYNAMIC_SIZE( pool_tracker_table_t );                  
    };                                                             
};
#include "magic/pool_tracker_table_t.end.hpp"
