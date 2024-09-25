#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_usage_t.start.hpp"
namespace rtl
{
    struct heap_usage_entry_t;

    // [struct _RTL_HEAP_USAGE]
    // => WDK 10 (NV)
    //
    struct heap_usage_t                                             
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                        length;                  //{ +0x0000    } | .Length
        _m01 uint64_t                        bytes_allocated;         //{ +0x0008    } | .BytesAllocated
        _m02 uint64_t                        bytes_committed;         //{ +0x0010    } | .BytesCommitted
        _m03 uint64_t                        bytes_reserved;          //{ +0x0018    } | .BytesReserved
        _m04 uint64_t                        bytes_reserved_maximum;  //{ +0x0020    } | .BytesReservedMaximum
        _m05 struct rtl::heap_usage_entry_t* entries;                 //{ +0x0028    } | .Entries
        _m06 struct rtl::heap_usage_entry_t* added_entries;           //{ +0x0030    } | .AddedEntries
        _m07 struct rtl::heap_usage_entry_t* removed_entries;         //{ +0x0038    } | .RemovedEntries
                                                                    
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_USAGE.$", 0x0, false, 0xc2186cdd176446dc );                       
        SDK_FIXED_SIZE( heap_usage_t, 0x80 );                       
    };                                                              
};
#include "magic/heap_usage_t.end.hpp"
SDK_VERIFY( struct rtl::heap_usage_t, 0x80 );
