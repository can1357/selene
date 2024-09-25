#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "pte_chain_head_t.hpp"

#include "magic/special_pool_t.start.hpp"
namespace mi
{
    // [struct _MI_SPECIAL_POOL]
    // => Windows 10 v1607
    //
    struct special_pool_t                                  
    {                                                      
        // Windows 10 v1607                                
        //                                                 
        _m00 uint64_t                    lock;               //{ +0x0000    } | .Lock
        _m01 struct mi::pte_chain_head_t paged;              //{ +0x0008    } | .Paged
        _m02 struct mi::pte_chain_head_t non_paged;          //{ +0x0020    } | .NonPaged
        _m03 volatile uint64_t           pages_in_use;       //{ +0x0038    } | .PagesInUse
        _m04 struct rtl::bitmap_t        special_pool_pdes;  //{ +0x0040    } | .SpecialPoolPdes
                                                           
        SDK_MAGIC_PROPERTIES( "_MI_SPECIAL_POOL.$", 0x0, false, 0x4b42ca078d170e48 );                  
        SDK_FIXED_SIZE( special_pool_t, 0x50 );                  
    };                                                     
};
#include "magic/special_pool_t.end.hpp"
SDK_VERIFY( struct mi::special_pool_t, 0x50 );
