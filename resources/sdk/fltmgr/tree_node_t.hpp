#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/splay_links_t.hpp"

#include "magic/tree_node_t.start.hpp"
namespace fltmgr
{
    struct tree_root_t;

    // [struct _TREE_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tree_node_t                             
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                         
        _m00 struct rtl::splay_links_t   link;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct fltmgr::tree_root_t* tree_root;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TreeRoot
        _m02 void*                       key1;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Key1
        _m03 void*                       key2;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Key2
        _m04 uint32_t                    flags;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
                                                   
        SDK_MAGIC_PROPERTIES( "_TREE_NODE.$", 0x38, true, 0xc8e646b6871aa2fa );          
        SDK_FIXED_SIZE( tree_node_t, 0x38 );          
    };                                             
};
#include "magic/tree_node_t.end.hpp"
SDK_VERIFY( struct fltmgr::tree_node_t, 0x38 );
