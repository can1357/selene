#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/balanced_node_t.start.hpp"
namespace rtl
{
    struct balanced_node_t;

    // [struct _RTL_BALANCED_NODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct balanced_node_t                                            
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                            
        _m00 sdk::array<struct rtl::balanced_node_t*, 2> children;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Children
        _m01 struct rtl::balanced_node_t*                left;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Left
        _m02 struct rtl::balanced_node_t*                right;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Right
        _m03 uint1_t                                     red;           //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .Red
        _m04 uint2_t                                     balance;       //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .Balance
        _m05 uint64_t                                    parent_value;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ParentValue
                                                                      
        SDK_NONVOL_PROPERTIES( "_RTL_BALANCED_NODE.$", 0x18, true, 0xad7e9add0a8f1cda );             
        SDK_FIXED_SIZE( balanced_node_t, 0x18 );                      
    };                                                                
};
#include "magic/balanced_node_t.end.hpp"
SDK_VERIFY( struct rtl::balanced_node_t, 0x18 );
