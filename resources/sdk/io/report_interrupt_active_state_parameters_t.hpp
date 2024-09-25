#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kinterrupt_t; }

#include "magic/report_interrupt_active_state_parameters_t.start.hpp"
namespace io
{
    struct interrupt_message_info_t;

    // [struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct report_interrupt_active_state_parameters_t                                            
    {                                                                                            
        union u0_connection_context_t                                                            
        {                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                                   
            _m01 void*                                generic;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Generic
            _m02 struct nt::kinterrupt_t*             interrupt_object;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptObject
            _m03 struct io::interrupt_message_info_t* interrupt_message_table;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptMessageTable
                                                                                                 
            SDK_NONVOL_PROPERTIES( "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.ConnectionContext.$", 0x8, true, 0x221cf263ff2d92ca );                                           
            SDK_FIXED_SIZE( u0_connection_context_t, 0x8 );                                           
        };                                                                                       
                                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                                       
        _m00 uint32_t                                                         version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m04 u0_connection_context_t                                          connection_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectionContext
                                                                                                 
        SDK_NONVOL_PROPERTIES( "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.$", 0x10, true, 0x8da13e04cb4010cd );                   
        SDK_FIXED_SIZE( report_interrupt_active_state_parameters_t, 0x10 );                      
    };                                                                                           
};
#include "magic/report_interrupt_active_state_parameters_t.end.hpp"
SDK_VERIFY( union io::report_interrupt_active_state_parameters_t::u0_connection_context_t, 0x8 );
SDK_VERIFY( struct io::report_interrupt_active_state_parameters_t, 0x10 );
