#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/watchdog_irp_t.start.hpp"
namespace verf
{
    // [struct _VF_WATCHDOG_IRP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct watchdog_irp_t                             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                            
        _m00 nt::list_entry_t  list_entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::irp_t* irp;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m02 uint32_t          due_tick_count;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DueTickCount
        _m03 volatile uint8_t  inserted;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Inserted
        _m04 char              tracked_stack_location;  //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .TrackedStackLocation
        _m05 uint16_t          cancel_timeout_ticks;    //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .CancelTimeoutTicks
                                                      
        SDK_MAGIC_PROPERTIES( "_VF_WATCHDOG_IRP.$", 0x20, true, 0x89fbbb2d6856cbc4 );                       
        SDK_FIXED_SIZE( watchdog_irp_t, 0x20 );                       
    };                                                
};
#include "magic/watchdog_irp_t.end.hpp"
SDK_VERIFY( struct verf::watchdog_irp_t, 0x20 );
