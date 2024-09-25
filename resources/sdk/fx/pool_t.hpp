#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_no_dynam_t.hpp"
#include "../mx/paged_lock_no_dynam_t.hpp"

#include "magic/pool_t.start.hpp"
namespace fx
{
    // [struct FX_POOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_t                                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 class mx::lock_no_dynam_t       non_paged_lock;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NonPagedLock
        _m01 nt::list_entry_t                non_paged_head;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NonPagedHead
        _m02 class mx::paged_lock_no_dynam_t paged_lock;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PagedLock
        _m03 nt::list_entry_t                paged_head;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PagedHead
        _m04 uint64_t                        non_paged_bytes;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NonPagedBytes
        _m05 uint64_t                        paged_bytes;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PagedBytes
        _m06 uint32_t                        non_paged_allocations;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NonPagedAllocations
        _m07 uint32_t                        paged_allocations;           //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .PagedAllocations
        _m08 uint64_t                        peak_non_paged_bytes;        //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PeakNonPagedBytes
        _m09 uint64_t                        peak_paged_bytes;            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .PeakPagedBytes
        _m10 uint32_t                        peak_non_paged_allocations;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .PeakNonPagedAllocations
        _m11 uint32_t                        peak_paged_allocations;      //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .PeakPagedAllocations
                                                                        
        SDK_MAGIC_PROPERTIES( "FX_POOL.$", 0xa0, true, 0x93545dfb2df0db79 );                           
        SDK_FIXED_SIZE( pool_t, 0xa0 );                                 
    };                                                                  
};
#include "magic/pool_t.end.hpp"
SDK_VERIFY( struct fx::pool_t, 0xa0 );
