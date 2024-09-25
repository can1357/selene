#pragma once
#include <sdkgen/support_library.hpp>
#include "kdevice_queue_entry_t.hpp"
#include "../io/allocation_action_t.hpp"

#include "magic/wait_context_block_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct kdpc_t;
    struct device_object_t;

    // [struct _WAIT_CONTEXT_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wait_context_block_t                                       
    {                                                                 
        using pdriver_control_t = sdk::function<enum io::allocation_action_t(struct nt::device_object_t*, struct nt::irp_t*, void*, void*)>*;                        
                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                            
        _m00 struct nt::kdevice_queue_entry_t wait_queue_entry;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WaitQueueEntry
        _m01 nt::list_entry_t                 dma_wait_entry;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DmaWaitEntry
        _m02 uint32_t                         number_of_channels;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfChannels
        _m03 uint1_t                          sync_callback;            //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .SyncCallback
        _m04 uint1_t                          dma_context;              //{ +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  } | .DmaContext
        _m05 uint1_t                          zero_map_registers;       //{ +0x0014@2  +0x0014@2  +0x0014@2  +0x0014@2  +0x0014@2  } | .ZeroMapRegisters
        _m06 pdriver_control_t                device_routine;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceRoutine
        _m07 void*                            device_context;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceContext
        _m08 uint32_t                         number_of_map_registers;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfMapRegisters
        _m09 void*                            device_object;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceObject
        _m10 void*                            current_irp;              //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CurrentIrp
        _m11 struct nt::kdpc_t*               buffer_chaining_dpc;      //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .BufferChainingDpc
                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                            
        _m12 uint20_t                         number_of_remap_pages;    //{ +0x0014@12 +0x0014@12 +0x0014@12 +0x0014@12 } | .NumberOfRemapPages
                                                                      
        SDK_NONVOL_PROPERTIES( "_WAIT_CONTEXT_BLOCK.$", 0x48, true, 0x2d5151a95093a28f );                        
        SDK_FIXED_SIZE( wait_context_block_t, 0x48 );                        
    };                                                                
};
#include "magic/wait_context_block_t.end.hpp"
SDK_VERIFY( struct nt::wait_context_block_t, 0x48 );
