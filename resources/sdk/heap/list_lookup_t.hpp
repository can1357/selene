#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/list_lookup_t.start.hpp"
namespace heap
{
    struct list_lookup_t;

    // [struct _HEAP_LIST_LOOKUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct list_lookup_t                                    
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                  
        _m00 struct heap::list_lookup_t* extended_lookup;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtendedLookup
        _m01 uint32_t                    array_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ArraySize
        _m02 uint32_t                    extra_item;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtraItem
        _m03 uint32_t                    item_count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ItemCount
        _m04 uint32_t                    out_of_range_items;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OutOfRangeItems
        _m05 uint32_t                    base_index;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseIndex
        _m06 nt::list_entry_t*           list_head;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ListHead
        _m07 uint32_t*                   lists_in_use_ulong;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ListsInUseUlong
        _m08 nt::list_entry_t**          list_hints;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ListHints
                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_LIST_LOOKUP.$", 0x38, true, 0x673fe7cfae607cec );                   
        SDK_FIXED_SIZE( list_lookup_t, 0x38 );                   
    };                                                      
};
#include "magic/list_lookup_t.end.hpp"
SDK_VERIFY( struct heap::list_lookup_t, 0x38 );
