#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct kinterrupt_t;    }

#include "magic/connect_interrupt_message_based_parameters_t.start.hpp"
namespace io
{
    struct interrupt_message_info_t;

    // [struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct connect_interrupt_message_based_parameters_t                                                  
    {                                                                                                    
        union u0_connection_context_t                                                                    
        {                                                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                                           
            _m01 void**                                generic;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Generic
            _m02 struct io::interrupt_message_info_t** interrupt_message_table;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptMessageTable
            _m03 struct nt::kinterrupt_t**             interrupt_object;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptObject
                                                                                                         
            SDK_NONVOL_PROPERTIES( "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ConnectionContext.$", 0x8, true, 0xda8504869fc769e1 );                                                  
            SDK_FIXED_SIZE( u0_connection_context_t, 0x8 );                                                  
        };                                                                                               
                                                                                                         
        using pkmessage_service_routine_t = sdk::function<uint8_t(struct nt::kinterrupt_t*, void*, uint32_t)>*;                          
        using pkservice_routine_t =         sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*;                          
                                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                                               
        _m00 struct nt::device_object_t*                                       physical_device_object;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalDeviceObject
        _m04 u0_connection_context_t                                           connection_context;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectionContext
        _m05 pkmessage_service_routine_t                                       message_service_routine;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MessageServiceRoutine
        _m06 void*                                                             service_context;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ServiceContext
        _m07 uint64_t*                                                         spin_lock;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SpinLock
        _m08 uint8_t                                                           synchronize_irql;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SynchronizeIrql
        _m09 uint8_t                                                           floating_save;              //{ +0x0029    +0x0029    +0x0029    +0x0029    +0x0029    } | .FloatingSave
        _m10 pkservice_routine_t                                               fall_back_service_routine;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FallBackServiceRoutine
                                                                                                         
        SDK_NONVOL_PROPERTIES( "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.$", 0x38, true, 0xfd07fc5751cf0fb3 );                          
        SDK_FIXED_SIZE( connect_interrupt_message_based_parameters_t, 0x38 );                            
    };                                                                                                   
};
#include "magic/connect_interrupt_message_based_parameters_t.end.hpp"
SDK_VERIFY( union io::connect_interrupt_message_based_parameters_t::u0_connection_context_t, 0x8 );
SDK_VERIFY( struct io::connect_interrupt_message_based_parameters_t, 0x38 );
