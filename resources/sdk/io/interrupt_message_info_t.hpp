#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_message_info_entry_t.hpp"

#include "magic/interrupt_message_info_t.start.hpp"
namespace io
{
    // [struct _IO_INTERRUPT_MESSAGE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interrupt_message_info_t        
    {                                      
        using message_info_t = sdk::array<struct io::interrupt_message_info_entry_t, 1>;              
                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                 
        _m00 uint8_t         unified_irql;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UnifiedIrql
        _m01 uint32_t        message_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageCount
        _m02 message_info_t  message_info;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageInfo
                                           
        SDK_NONVOL_PROPERTIES( "_IO_INTERRUPT_MESSAGE_INFO.$", 0x38, true, 0x88182efcb5eb3fab );              
        SDK_FIXED_SIZE( interrupt_message_info_t, 0x38 );              
    };                                     
};
#include "magic/interrupt_message_info_t.end.hpp"
SDK_VERIFY( struct io::interrupt_message_info_t, 0x38 );
