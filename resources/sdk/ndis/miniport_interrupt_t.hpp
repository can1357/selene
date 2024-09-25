#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"

namespace nt { struct kinterrupt_t; }

#include "magic/miniport_interrupt_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;

    // [struct _NDIS_MINIPORT_INTERRUPT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_interrupt_t                                                   
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                        
        _m00 struct nt::kinterrupt_t*                        interrupt_object;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptObject
        _m01 volatile uint8_t                                is_deregistered;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IsDeregistered
        _m02 uint64_t                                        dpc_count_lock;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcCountLock
        _m03 sdk::function<void(uint8_t*, uint8_t*, void*)>* miniport_isr;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MiniportIsr
        _m04 sdk::function<void(void*)>*                     miniport_dpc;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MiniportDpc
        _m05 struct nt::kdpc_t                               interrupt_dpc;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InterruptDpc
        _m06 struct ndis::miniport_block_t*                  miniport;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Miniport
        _m07 volatile int32_t                                dpc_count;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .DpcCount
        _m08 struct nt::kevent_t                             dpcs_completed_event;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DpcsCompletedEvent
        _m09 uint8_t                                         shared_interrupt;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .SharedInterrupt
        _m10 uint8_t                                         isr_requested;         //{ +0x0091    +0x0091    +0x0091    +0x0091    } | .IsrRequested
                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_INTERRUPT.$", 0x98, true, 0xc6ddbcd98db7a362 );                     
        SDK_FIXED_SIZE( miniport_interrupt_t, 0x98 );                             
    };                                                                            
};
#include "magic/miniport_interrupt_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_interrupt_t, 0x98 );
