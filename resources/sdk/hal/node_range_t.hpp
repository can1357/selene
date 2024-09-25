#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_range_t.start.hpp"
namespace hal
{
    // [struct _HAL_NODE_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct node_range_t                
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t page_frame_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageFrameIndex
        _m01 uint32_t node;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Node
                                       
        SDK_MAGIC_PROPERTIES( "_HAL_NODE_RANGE.$", 0x10, true, 0xecced2db814454bc );                 
        SDK_FIXED_SIZE( node_range_t, 0x10 );                 
    };                                 
};
#include "magic/node_range_t.end.hpp"
SDK_VERIFY( struct hal::node_range_t, 0x10 );
