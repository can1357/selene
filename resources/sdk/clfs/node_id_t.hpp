#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_id_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_NODE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct node_id_t          
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cType
        _m01 uint32_t cb_node;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .cbNode
                              
        SDK_NONVOL_PROPERTIES( "_CLFS_NODE_ID.$", 0x8, true, 0x70358dd96183768f );        
        SDK_FIXED_SIZE( node_id_t, 0x8 );        
    };                        
};
#include "magic/node_id_t.end.hpp"
SDK_VERIFY( struct clfs::node_id_t, 0x8 );
