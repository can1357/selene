#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/avl_tree_node_t.start.hpp"
namespace verf
{
    // [struct _VF_AVL_TREE_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avl_tree_node_t       
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    p;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .p
        _m01 uint64_t range_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RangeSize
                                 
        SDK_MAGIC_PROPERTIES( "_VF_AVL_TREE_NODE.$", 0x10, true, 0x7b490082f633ba79 );           
        SDK_FIXED_SIZE( avl_tree_node_t, 0x10 );           
    };                           
};
#include "magic/avl_tree_node_t.end.hpp"
SDK_VERIFY( struct verf::avl_tree_node_t, 0x10 );
