#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"

#include "magic/lock_header_t.start.hpp"
namespace nt
{
    // [struct _LOCK_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_header_t                                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 struct rtl::avl_tree_t lock_tree;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockTree
        _m01 uint64_t               count;                   //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .Count
        _m02 uint64_t               lock;                    //{ +0x0010    +0x0018    +0x0018    +0x0018    } | .Lock
        _m03 uint32_t               valid;                   //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .Valid
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m04 struct rtl::avl_tree_t lock_mdl_switched_tree;  //{ +0x0008    +0x0008    +0x0008    } | .LockMdlSwitchedTree
                                                           
        SDK_MAGIC_PROPERTIES( "_LOCK_HEADER.$", 0x28, true, 0xf599b97061cd27f0 );                       
        SDK_DYNAMIC_SIZE( lock_header_t );                       
    };                                                     
};
#include "magic/lock_header_t.end.hpp"
