#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/pagefile_bitmaps_cache_entry_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pagefile_bitmaps_cache_entry_t                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                  
        _m00 struct rtl::balanced_node_t length_tree_node;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LengthTreeNode
        _m01 nt::list_entry_t            free_list_entry;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeListEntry
        _m02 struct rtl::balanced_node_t location_tree_node;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LocationTreeNode
        _m03 uint32_t                    starting_index;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StartingIndex
        _m04 uint32_t                    length;              //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Length
                                                            
        SDK_MAGIC_PROPERTIES( "_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.$", 0x38, true, 0xbd5db789ee6554a7 );                   
        SDK_FIXED_SIZE( pagefile_bitmaps_cache_entry_t, 0x38 );                   
    };                                                      
};
#include "magic/pagefile_bitmaps_cache_entry_t.end.hpp"
SDK_VERIFY( struct mi::pagefile_bitmaps_cache_entry_t, 0x38 );
