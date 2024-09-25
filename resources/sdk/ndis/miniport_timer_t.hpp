#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"

#include "magic/miniport_timer_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;
    struct miniport_timer_t;

    // [struct _NDIS_MINIPORT_TIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_timer_t                                                           
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                            
        _m00 struct nt::ktimer_t                              timer;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timer
        _m01 struct nt::kdpc_t                                dpc;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Dpc
        _m02 sdk::function<void(void*, void*, void*, void*)>* miniport_timer_function;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .MiniportTimerFunction
        _m03 void*                                            miniport_timer_context;   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .MiniportTimerContext
        _m04 struct ndis::miniport_block_t*                   miniport;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Miniport
        _m05 struct ndis::miniport_timer_t*                   next_timer;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NextTimer
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_TIMER.$", 0xa0, true, 0xe3cf1c2f37fe16f0 );                        
        SDK_FIXED_SIZE( miniport_timer_t, 0xa0 );                                     
    };                                                                                
};
#include "magic/miniport_timer_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_timer_t, 0xa0 );
