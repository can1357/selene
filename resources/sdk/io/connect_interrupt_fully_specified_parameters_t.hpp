#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kinterrupt_mode_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct kinterrupt_t;    }

#include "magic/connect_interrupt_fully_specified_parameters_t.start.hpp"
namespace io
{
    // [struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct connect_interrupt_fully_specified_parameters_t       
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
        _m07 uint8_t                     share_vector;            //{ +0x002a    +0x002a    +0x002a    +0x002a    +0x002a    } | .ShareVector
        _m08 uint32_t                    vector;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .Vector
        _m09 uint8_t                     irql;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Irql
        _m10 enum nt::kinterrupt_mode_t  interrupt_mode;          //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .InterruptMode
        _m11 uint64_t                    processor_enable_mask;   //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ProcessorEnableMask
        _m12 uint16_t                    group;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Group
                                                                
        SDK_NONVOL_PROPERTIES( "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.$", 0x48, true, 0xeccdb340a4d859ac );                       
        SDK_FIXED_SIZE( connect_interrupt_fully_specified_parameters_t, 0x48 );                       
    };                                                          
};
#include "magic/connect_interrupt_fully_specified_parameters_t.end.hpp"
SDK_VERIFY( struct io::connect_interrupt_fully_specified_parameters_t, 0x48 );
