#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "secondary_interrupt_line_state_t.hpp"
#include "secondary_interrupt_provider_interface_t.hpp"

#include "magic/secondary_ic_list_entry_t.start.hpp"
namespace nt
{
    // [struct _SECONDARY_IC_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct secondary_ic_list_entry_t                    
    {                                                   
        using interface_t = struct nt::secondary_interrupt_provider_interface_t;                       
        using state_t =     sdk::array<struct nt::secondary_interrupt_line_state_t, 1>;                       
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                              
        _m00 nt::list_entry_t    list_entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t            gsiv_base;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GsivBase
        _m02 uint32_t            gsiv_size;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GsivSize
        _m03 interface_t         interface;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Interface
        _m04 volatile int32_t    busy_count;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BusyCount
        _m05 volatile int32_t    exclusive_waiter_count;  //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .ExclusiveWaiterCount
        _m06 struct nt::kevent_t notification_event;      //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .NotificationEvent
        _m07 nt::list_entry_t    signal_list_entry;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .SignalListEntry
        _m08 state_t             state;                   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .State
                                                        
        SDK_MAGIC_PROPERTIES( "_SECONDARY_IC_LIST_ENTRY.$", 0xb0, true, 0x828775963bd827ed );                       
        SDK_FIXED_SIZE( secondary_ic_list_entry_t, 0xb0 );                       
    };                                                  
};
#include "magic/secondary_ic_list_entry_t.end.hpp"
SDK_VERIFY( struct nt::secondary_ic_list_entry_t, 0xb0 );
