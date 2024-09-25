#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_t.start.hpp"
namespace tp
{
    struct task_callbacks_t;

    // [struct _TP_TASK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_t                                               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                      
        _m00 const struct tp::task_callbacks_t* callbacks;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Callbacks
        _m01 uint32_t                           numa_node;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumaNode
        _m02 uint8_t                            ideal_processor;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IdealProcessor
        _m03 nt::list_entry_t                   list_entry;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ListEntry
                                                                
        SDK_MAGIC_PROPERTIES( "_TP_TASK.$", 0x20, true, 0x245ac0126850cc14 );                
        SDK_FIXED_SIZE( task_t, 0x20 );                         
    };                                                          
};
#include "magic/task_t.end.hpp"
SDK_VERIFY( struct tp::task_t, 0x20 );
