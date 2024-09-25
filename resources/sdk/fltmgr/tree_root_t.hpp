#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl { struct splay_links_t; }

#include "magic/tree_root_t.start.hpp"
namespace fltmgr
{
    // [struct _TREE_ROOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tree_root_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                   
        _m00 struct rtl::splay_links_t* tree;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tree
                                             
        SDK_MAGIC_PROPERTIES( "_TREE_ROOT.$", 0x8, true, 0xdb4d97440ec9856a );     
        SDK_FIXED_SIZE( tree_root_t, 0x8 );     
    };                                       
};
#include "magic/tree_root_t.end.hpp"
SDK_VERIFY( struct fltmgr::tree_root_t, 0x8 );
