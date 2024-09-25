#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_information_t.start.hpp"
namespace rtl
{
    struct heap_tag_t;
    struct heap_entry_t;

    // [struct _RTL_HEAP_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_information_t                                   
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                      
        _m00 void*                     base_address;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint32_t                  flags;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint16_t                  entry_overhead;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .EntryOverhead
        _m03 uint16_t                  creator_back_trace_index;  //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .CreatorBackTraceIndex
        _m04 uint64_t                  bytes_allocated;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BytesAllocated
        _m05 uint64_t                  bytes_committed;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BytesCommitted
        _m06 uint32_t                  number_of_tags;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfTags
        _m07 uint32_t                  number_of_entries;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .NumberOfEntries
        _m08 uint32_t                  number_of_pseudo_tags;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfPseudoTags
        _m09 uint32_t                  pseudo_tag_granularity;    //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .PseudoTagGranularity
        _m10 struct rtl::heap_tag_t*   tags;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Tags
        _m11 struct rtl::heap_entry_t* entries;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Entries
                                                                
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_INFORMATION.$", 0x58, true, 0x2df652e1bbce48d3 );                         
        SDK_FIXED_SIZE( heap_information_t, 0x58 );                         
    };                                                          
};
#include "magic/heap_information_t.end.hpp"
SDK_VERIFY( struct rtl::heap_information_t, 0x58 );
