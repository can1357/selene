#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "interrupt_type_t.hpp"

namespace io { struct interrupt_message_info_t; }

#include "magic/miniport_interrupt_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_interrupt_characteristics_t                                                 
    {                                                                                           
        using interrupt_handler_t =             sdk::function<uint8_t(void*, uint8_t*, uint32_t*)>*;                                  
        using message_interrupt_handler_t =     sdk::function<uint8_t(void*, uint32_t, uint8_t*, uint32_t*)>*;                                  
        using message_interrupt_dpc_handler_t = sdk::function<void(void*, uint32_t, void*, void*, void*)>*;                                  
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                      
        _m00 struct ndis::object_header_t                     header;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 interrupt_handler_t                              interrupt_handler;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptHandler
        _m02 sdk::function<void(void*, void*, void*, void*)>* interrupt_dpc_handler;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterruptDpcHandler
        _m03 sdk::function<void(void*)>*                      disable_interrupt_handler;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DisableInterruptHandler
        _m04 sdk::function<void(void*)>*                      enable_interrupt_handler;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EnableInterruptHandler
        _m05 uint8_t                                          msi_supported;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MsiSupported
        _m06 uint8_t                                          msi_sync_with_all_messages;         //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .MsiSyncWithAllMessages
        _m07 message_interrupt_handler_t                      message_interrupt_handler;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MessageInterruptHandler
        _m08 message_interrupt_dpc_handler_t                  message_interrupt_dpc_handler;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MessageInterruptDpcHandler
        _m09 sdk::function<void(void*, uint32_t)>*            disable_message_interrupt_handler;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DisableMessageInterruptHandler
        _m10 sdk::function<void(void*, uint32_t)>*            enable_message_interrupt_handler;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnableMessageInterruptHandler
        _m11 enum ndis::interrupt_type_t                      interrupt_type;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .InterruptType
        _m12 struct io::interrupt_message_info_t*             message_info_table;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MessageInfoTable
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS.$", 0x60, true, 0xfea9f4ed5eb36015 );                                  
        SDK_FIXED_SIZE( miniport_interrupt_characteristics_t, 0x60 );                                  
    };                                                                                          
};
#include "magic/miniport_interrupt_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_interrupt_characteristics_t, 0x60 );
