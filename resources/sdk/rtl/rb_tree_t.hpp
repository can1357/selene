#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rb_tree_t.start.hpp"
namespace rtl
{
    struct balanced_node_t;

    // [struct _RTL_RB_TREE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rb_tree_t                              
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                        
        _m00 struct rtl::balanced_node_t* root;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Root
        _m01 struct rtl::balanced_node_t* min;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Min
                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                        
        _m02 uint1_t                      encoded;  //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .Encoded
                                                  
        SDK_NONVOL_PROPERTIES( "_RTL_RB_TREE.$", 0x10, true, 0x9f23e5bb91129e39 );        
        SDK_FIXED_SIZE( rb_tree_t, 0x10 );        
    };                                            
};
#include "magic/rb_tree_t.end.hpp"
SDK_VERIFY( struct rtl::rb_tree_t, 0x10 );
