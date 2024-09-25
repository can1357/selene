#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pte_tracker_t.start.hpp"
namespace nt
{
    struct mdl_t;

    // [struct _PTE_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pte_tracker_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                        
        _m00 nt::list_entry_t     list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::mdl_t*    mdl;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Mdl
        _m02 uint64_t             count;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Count
        _m03 void*                system_va;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemVa
        _m04 void*                start_va;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StartVa
        _m05 uint32_t             offset;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Offset
        _m06 uint32_t             length;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Length
        _m07 uint64_t             page;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Page
        _m08 uint1_t              io_mapping;       //{ +0x0040@0  +0x0040@0  +0x0040@0  +0x0040@0  } | .IoMapping
        _m09 uint1_t              matched;          //{ +0x0040@1  +0x0040@1  +0x0040@1  +0x0040@1  } | .Matched
        _m10 uint2_t              cache_attribute;  //{ +0x0040@2  +0x0040@2  +0x0040@2  +0x0040@2  } | .CacheAttribute
        _m11 uint1_t              guard_pte;        //{ +0x0040@4  +0x0040@4  +0x0040@4  +0x0040@4  } | .GuardPte
        _m12 sdk::array<void*, 7> stack_trace;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StackTrace
                                                  
        SDK_MAGIC_PROPERTIES( "_PTE_TRACKER.$", 0x80, true, 0xd0ed95edeb2fed10 );                
        SDK_FIXED_SIZE( pte_tracker_t, 0x80 );                
    };                                            
};
#include "magic/pte_tracker_t.end.hpp"
SDK_VERIFY( struct nt::pte_tracker_t, 0x80 );
