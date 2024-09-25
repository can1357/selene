#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

#include "magic/object_splay_node_t.start.hpp"
namespace win
{
    // [struct ObjectSplayNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_splay_node_t                          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                              
        _m00 struct rtl::splay_links_t splay_links;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SplayLinks
        _m01 void*                     pv_object;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvObject
        _m02 void*                     pv_vtbl_tracking;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvVtblTracking
                                                        
        SDK_MAGIC_PROPERTIES( "ObjectSplayNode.$", 0x28, true, 0x36f09eb9cb646ed1 );                 
        SDK_FIXED_SIZE( object_splay_node_t, 0x28 );                 
    };                                                  
};
#include "magic/object_splay_node_t.end.hpp"
SDK_VERIFY( struct win::object_splay_node_t, 0x28 );
