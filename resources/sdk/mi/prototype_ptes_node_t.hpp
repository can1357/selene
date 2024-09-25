#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

#include "magic/prototype_ptes_node_t.start.hpp"
namespace mi
{
    // [struct _MI_PROTOTYPE_PTES_NODE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prototype_ptes_node_t                              
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct rtl::balanced_node_t node;                  //{ +0x0000    +0x0000    +0x0000    } | .Node
        _m01 uint3_t                     allocation_type;       //{ +0x0018@0  +0x0018@0  +0x0018@0  } | .AllocationType
        _m02 uint1_t                     inserted;              //{ +0x0018@3  +0x0018@3  +0x0018@3  } | .Inserted
        _m03 uint64_t                    prototype_ptes_flags;  //{ +0x0018    +0x0018    +0x0018    } | .PrototypePtesFlags
                                                              
        SDK_MAGIC_PROPERTIES( "_MI_PROTOTYPE_PTES_NODE.$", 0x20, true, 0x5d35abd3f0146ff8 );                     
        SDK_FIXED_SIZE( prototype_ptes_node_t, 0x20 );                     
    };                                                        
};
#include "magic/prototype_ptes_node_t.end.hpp"
SDK_VERIFY( struct mi::prototype_ptes_node_t, 0x20 );
