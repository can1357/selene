#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_root_t.hpp"

#include "magic/context_list_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _CONTEXT_LIST_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_list_ctrl_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                   
        _m00 struct fltmgr::tree_root_t list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
                                             
        SDK_MAGIC_PROPERTIES( "_CONTEXT_LIST_CTRL.$", 0x8, true, 0xa7f24956c8f98423 );     
        SDK_FIXED_SIZE( context_list_ctrl_t, 0x8 );     
    };                                       
};
#include "magic/context_list_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::context_list_ctrl_t, 0x8 );
