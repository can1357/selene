#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_activator_subtask_t.start.hpp"
namespace wdf
{
    // [struct _AsActivatorSubtask]
    // => Windows 11
    //
    struct as_activator_subtask_t
    {                            
        // Windows 11            
        //                       
        _m00 uint32_t client_id;   //{ +0x0000    } | .ClientId
        _m01 uint16_t task_id;     //{ +0x000c    } | .TaskId
        _m02 uint16_t subtask_id;  //{ +0x000e    } | .SubtaskId
                                 
        SDK_MAGIC_PROPERTIES( "_AsActivatorSubtask.$", 0x0, false, 0x46aff0846e57392c );           
        SDK_FIXED_SIZE( as_activator_subtask_t, 0x10 );           
    };                           
};
#include "magic/as_activator_subtask_t.end.hpp"
SDK_VERIFY( struct wdf::as_activator_subtask_t, 0x10 );
