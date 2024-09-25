#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/avl_tree_t.start.hpp"
namespace rtl
{
    struct balanced_node_t;

    // [struct _RTL_AVL_TREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avl_tree_t                          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                     
        _m00 struct rtl::balanced_node_t* root;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Root
                                               
        SDK_MAGIC_PROPERTIES( "_RTL_AVL_TREE.$", 0x8, true, 0x2344e77873451484 );     
        SDK_FIXED_SIZE( avl_tree_t, 0x8 );     
    };                                         
};
#include "magic/avl_tree_t.end.hpp"
SDK_VERIFY( struct rtl::avl_tree_t, 0x8 );
