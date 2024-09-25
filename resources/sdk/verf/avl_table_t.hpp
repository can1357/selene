#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_table_t.hpp"

#include "magic/avl_table_t.start.hpp"
namespace verf
{
    struct avl_tree_node_t;

    // [struct _VF_AVL_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avl_table_t                                   
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                               
        _m00 struct rtl::avl_table_t       rtl_table;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RtlTable
        _m01 struct verf::avl_tree_node_t* reserved_node;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ReservedNode
        _m02 void*                         node_to_free;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NodeToFree
        _m03 volatile int32_t              lock;           //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .Lock
                                                         
        SDK_MAGIC_PROPERTIES( "_VF_AVL_TABLE.$", 0xc0, true, 0x6f5916e6cfe6296d );              
        SDK_FIXED_SIZE( avl_table_t, 0xc0 );              
    };                                                   
};
#include "magic/avl_table_t.end.hpp"
SDK_VERIFY( struct verf::avl_table_t, 0xc0 );
