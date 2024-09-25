#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"

#include "magic/huge_system_view_head_t.start.hpp"
namespace mi
{
    // [struct _MI_HUGE_SYSTEM_VIEW_HEAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct huge_system_view_head_t             
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 struct rtl::avl_tree_t view_root;   //{ +0x0000    +0x0000    +0x0000    } | .ViewRoot
        _m01 uint32_t               view_count;  //{ +0x0008    +0x0008    +0x0008    } | .ViewCount
        _m02 volatile int32_t       lock;        //{ +0x000c    +0x000c    +0x000c    } | .Lock
                                               
        SDK_MAGIC_PROPERTIES( "_MI_HUGE_SYSTEM_VIEW_HEAD.$", 0x10, true, 0x96409d496f038ed8 );           
        SDK_FIXED_SIZE( huge_system_view_head_t, 0x10 );           
    };                                         
};
#include "magic/huge_system_view_head_t.end.hpp"
SDK_VERIFY( struct mi::huge_system_view_head_t, 0x10 );
