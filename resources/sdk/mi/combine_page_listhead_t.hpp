#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"

#include "magic/combine_page_listhead_t.start.hpp"
namespace mi
{
    // [struct _MI_COMBINE_PAGE_LISTHEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct combine_page_listhead_t        
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 struct rtl::avl_tree_t table;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Table
        _m01 volatile int32_t       lock;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
                                          
        SDK_MAGIC_PROPERTIES( "_MI_COMBINE_PAGE_LISTHEAD.$", 0x10, true, 0x6379ae55d3859a07 );      
        SDK_FIXED_SIZE( combine_page_listhead_t, 0x10 );      
    };                                    
};
#include "magic/combine_page_listhead_t.end.hpp"
SDK_VERIFY( struct mi::combine_page_listhead_t, 0x10 );
