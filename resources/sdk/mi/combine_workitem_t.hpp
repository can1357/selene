#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

#include "magic/combine_workitem_t.start.hpp"
namespace mi
{
    // [struct _MI_COMBINE_WORKITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct combine_workitem_t                        
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 void*                        next_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntry
        _m01 struct nt::work_queue_item_t work_item;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkItem
                                                     
        SDK_MAGIC_PROPERTIES( "_MI_COMBINE_WORKITEM.$", 0x28, true, 0xabca2061ba0b5223 );           
        SDK_FIXED_SIZE( combine_workitem_t, 0x28 );           
    };                                               
};
#include "magic/combine_workitem_t.end.hpp"
SDK_VERIFY( struct mi::combine_workitem_t, 0x28 );
