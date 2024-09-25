#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "object_header_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"

namespace io { struct interrupt_message_info_t; }
namespace nt { struct kinterrupt_t;             }

#include "magic/interrupt_block_t.start.hpp"
namespace ndis
{
    struct dpc_work_item_t;
    struct miniport_block_t;
    struct interrupt_block_t;

    // [struct _NDIS_INTERRUPT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_block_t                                                                 
    {                                                                                        
        using miniport_isr_t =                   sdk::function<uint8_t(void*, uint8_t*, uint32_t*)>*;                               
        using miniport_message_isr_t =           sdk::function<uint8_t(void*, uint32_t, uint8_t*, uint32_t*)>*;                               
        using miniport_message_interrupt_dpc_t = sdk::function<void(void*, uint32_t, void*, void*, void*)>*;                               
                                                                                             
        // Windows 10 v1607                                                                  
        //                                                                                   
        _m00 struct ndis::object_header_t                     header;                          //{ +0x0000    } | .Header
        _m01 volatile uint8_t                                 is_deregistered;                 //{ +0x0004    } | .IsDeregistered
        _m02 void*                                            miniport_interrupt_context;      //{ +0x0008    } | .MiniportInterruptContext
        _m03 miniport_isr_t                                   miniport_isr;                    //{ +0x0010    } | .MiniportIsr
        _m04 sdk::function<void(void*, void*, void*, void*)>* miniport_dpc;                    //{ +0x0018    } | .MiniportDpc
        _m05 struct nt::kdpc_t                                interrupt_dpc;                   //{ +0x0020    } | .InterruptDpc
        _m06 struct ndis::miniport_block_t*                   miniport;                        //{ +0x0060    } | .Miniport
        _m07 volatile int32_t                                 dpc_count;                       //{ +0x0068    } | .DpcCount
        _m08 struct nt::kdpc_t*                               dpc;                             //{ +0x0070    } | .Dpc
        _m09 void*                                            generic;                         //{ +0x0078    } | .Generic
        _m10 struct nt::kinterrupt_t*                         interrupt_object;                //{ +0x0078    } | .InterruptObject
        _m11 struct io::interrupt_message_info_t*             message_info_table;              //{ +0x0078    } | .MessageInfoTable
        _m12 struct nt::kevent_t                              dpcs_completed_event;            //{ +0x0080    } | .DpcsCompletedEvent
        _m13 uint8_t                                          shared_interrupt;                //{ +0x0098    } | .SharedInterrupt
        _m14 uint8_t                                          isr_requested;                   //{ +0x0099    } | .IsrRequested
        _m15 struct ndis::interrupt_block_t*                  next_interrupt;                  //{ +0x00a0    } | .NextInterrupt
        _m16 enum nt::kinterrupt_mode_t                       interrupt_mode;                  //{ +0x00a8    } | .InterruptMode
        _m17 miniport_message_isr_t                           miniport_message_isr;            //{ +0x00b0    } | .MiniportMessageIsr
        _m18 miniport_message_interrupt_dpc_t                 miniport_message_interrupt_dpc;  //{ +0x00b8    } | .MiniportMessageInterruptDpc
        _m19 uint8_t                                          msi_supported;                   //{ +0x00c0    } | .MsiSupported
        _m20 uint8_t                                          message_used;                    //{ +0x00c1    } | .MessageUsed
        _m21 uint64_t                                         messages_sync_lock;              //{ +0x00c8    } | .MessagesSyncLock
        _m22 struct io::interrupt_message_info_t*             ndis_message_info_table;         //{ +0x00d0    } | .NdisMessageInfoTable
        _m23 struct ndis::dpc_work_item_t*                    dpc_work_items;                  //{ +0x00d8    } | .DpcWorkItems
        _m24 struct nt::kdpc_t*                               msg_dpc;                         //{ +0x00e0    } | .MsgDpc
                                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_INTERRUPT_BLOCK.$", 0x0, true, 0x2044be6fdbed1c9f );                               
        SDK_DYNAMIC_SIZE( interrupt_block_t );                                               
    };                                                                                       
};
#include "magic/interrupt_block_t.end.hpp"
