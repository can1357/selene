#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/fx_work_pool_item_t.start.hpp"
namespace pop
{
    struct fx_work_pool_t;

    // [struct _POP_FX_WORK_POOL_ITEM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_work_pool_item_t                      
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 struct pop::fx_work_pool_t*  work_pool;  //{ +0x0000    +0x0000    +0x0000    } | .WorkPool
        _m01 struct nt::work_queue_item_t work_item;  //{ +0x0008    +0x0008    +0x0008    } | .WorkItem
                                                    
        SDK_MAGIC_PROPERTIES( "_POP_FX_WORK_POOL_ITEM.$", 0x28, true, 0xb4da11e0aa75b483 );          
        SDK_FIXED_SIZE( fx_work_pool_item_t, 0x28 );          
    };                                              
};
#include "magic/fx_work_pool_item_t.end.hpp"
SDK_VERIFY( struct pop::fx_work_pool_item_t, 0x28 );
