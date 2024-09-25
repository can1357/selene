#pragma once
#include <sdkgen/support_library.hpp>
#include "avl_tree_node_t.hpp"

#include "magic/avl_tree_node_ex_t.start.hpp"
namespace verf
{
    // [struct _VF_AVL_TREE_NODE_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avl_tree_node_ex_t                        
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct verf::avl_tree_node_t base;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m01 uint32_t                     session_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SessionId
                                                     
        SDK_MAGIC_PROPERTIES( "_VF_AVL_TREE_NODE_EX.$", 0x18, true, 0x41b8a4ddea953fc1 );           
        SDK_FIXED_SIZE( avl_tree_node_ex_t, 0x18 );           
    };                                               
};
#include "magic/avl_tree_node_ex_t.end.hpp"
SDK_VERIFY( struct verf::avl_tree_node_ex_t, 0x18 );
