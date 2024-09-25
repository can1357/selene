#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"

#include "magic/timer_entry_t.start.hpp"
namespace ndis
{
    struct timer_entry_t;
    struct miniport_block_t;

    // [struct _NDIS_TIMER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_entry_t                                                               
    {                                                                                  
        // Windows 10 v1607                                                            
        //                                                                             
        _m00 struct ndis::timer_entry_t*                      next_timer;                //{ +0x0000    } | .NextTimer
        _m01 nt::list_entry_t                                 global_link;               //{ +0x0008    } | .GlobalLink
        _m02 void*                                            handle;                    //{ +0x0018    } | .Handle
        _m03 struct nt::ktimer_t                              timer;                     //{ +0x0020    } | .Timer
        _m04 struct nt::kdpc_t                                dpc;                       //{ +0x0060    } | .Dpc
        _m05 uint32_t                                         allocation_tag;            //{ +0x00a0    } | .AllocationTag
        _m06 sdk::function<void(void*, void*, void*, void*)>* timer_function;            //{ +0x00a8    } | .TimerFunction
        _m07 void*                                            default_function_context;  //{ +0x00b0    } | .DefaultFunctionContext
        _m08 void*                                            function_context;          //{ +0x00b8    } | .FunctionContext
        _m09 struct ndis::miniport_block_t*                   miniport;                  //{ +0x00c0    } | .Miniport
        _m10 uint8_t                                          periodic;                  //{ +0x00c8    } | .Periodic
                                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_TIMER_ENTRY.$", 0x0, true, 0x848ca4e490e5a1e );                         
        SDK_DYNAMIC_SIZE( timer_entry_t );                                             
    };                                                                                 
};
#include "magic/timer_entry_t.end.hpp"
