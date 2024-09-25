#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/avl_tree_t.start.hpp"
namespace verf
{
    struct avl_table_t;

    // [struct _VF_AVL_TREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avl_tree_t                                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                             
        _m00 uint64_t                  node_range_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeRangeSize
        _m01 volatile uint64_t         node_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NodeCount
        _m02 struct verf::avl_table_t* tables;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Tables
        _m03 uint32_t                  tables_no;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TablesNo
        _m04 uint8_t                   use_session_id;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .UseSessionId
        _m05 uint32_t                  node_size;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NodeSize
        _m06 uint32_t                  use_lookaside;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UseLookaside
                                                       
        SDK_MAGIC_PROPERTIES( "_VF_AVL_TREE.$", 0x28, true, 0xf724da249e062547 );                
        SDK_FIXED_SIZE( avl_tree_t, 0x28 );                
    };                                                 
};
#include "magic/avl_tree_t.end.hpp"
SDK_VERIFY( struct verf::avl_tree_t, 0x28 );
