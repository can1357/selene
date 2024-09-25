#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kdpc_t.hpp"
#include "../../nt/ktimer_t.hpp"

namespace io { struct workitem_t; }

#include "magic/stor_timer_context_t.start.hpp"
namespace stor::port
{
    struct raid_adapter_extension_t;

    // [struct _STOR_TIMER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_timer_context_t                                                
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                     
        _m00 struct stor::port::raid_adapter_extension_t* adapter;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Adapter
        _m01 struct nt::ktimer_t                          timer;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Timer
        _m02 struct nt::kdpc_t                            timer_dpc;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TimerDpc
        _m03 sdk::function<void(void*, void*)>*           callback;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Callback
        _m04 void*                                        callback_context;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CallbackContext
        _m05 struct io::workitem_t*                       free_timer_work_item;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .FreeTimerWorkItem
                                                                               
        SDK_MAGIC_PROPERTIES( "_STOR_TIMER_CONTEXT.$", 0xa0, true, 0xfe7094ba3f6878b9 );                     
        SDK_FIXED_SIZE( stor_timer_context_t, 0xa0 );                          
    };                                                                         
};
#include "magic/stor_timer_context_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_timer_context_t, 0xa0 );
