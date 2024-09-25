#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct kinterrupt_t;    }

#include "magic/connect_interrupt_line_based_parameters_t.start.hpp"
namespace io
{
    // [struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct connect_interrupt_line_based_parameters_t            
    {                                                           
        using pkservice_routine_t = sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*;                       
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                      
        _m00 struct nt::device_object_t* physical_device_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalDeviceObject
        _m01 struct nt::kinterrupt_t**   interrupt_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptObject
        _m02 pkservice_routine_t         service_routine;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceRoutine
        _m03 void*                       service_context;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ServiceContext
        _m04 uint64_t*                   spin_lock;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SpinLock
        _m05 uint8_t                     synchronize_irql;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SynchronizeIrql
        _m06 uint8_t                     floating_save;           //{ +0x0029    +0x0029    +0x0029    +0x0029    +0x0029    } | .FloatingSave
                                                                
        SDK_NONVOL_PROPERTIES( "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.$", 0x30, true, 0xba60b6c0d7a35da4 );                       
        SDK_FIXED_SIZE( connect_interrupt_line_based_parameters_t, 0x30 );                       
    };                                                          
};
#include "magic/connect_interrupt_line_based_parameters_t.end.hpp"
SDK_VERIFY( struct io::connect_interrupt_line_based_parameters_t, 0x30 );
