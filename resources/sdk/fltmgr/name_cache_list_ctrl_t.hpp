#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_root_t.hpp"

#include "magic/name_cache_list_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _NAME_CACHE_LIST_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_list_ctrl_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 uint32_t                   name_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NameFormat
        _m01 struct fltmgr::tree_root_t list;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .List
                                                    
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_LIST_CTRL.$", 0x10, true, 0x4d75bbc4d14524ca );            
        SDK_FIXED_SIZE( name_cache_list_ctrl_t, 0x10 );            
    };                                              
};
#include "magic/name_cache_list_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_list_ctrl_t, 0x10 );
