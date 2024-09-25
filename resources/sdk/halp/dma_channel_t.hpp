#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../dma/interrupt_type_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../dma/completion_status_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

namespace dma { struct adapter_t;        }
namespace nt  { struct adapter_object_t; }
namespace nt  { struct device_object_t;  }

#include "magic/dma_channel_t.start.hpp"
namespace halp
{
    // [struct _HALP_DMA_CHANNEL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_channel_t                                                  
    {                                                                     
        using current_completion_routine_t = sdk::function<void(struct dma::adapter_t*, struct nt::device_object_t*, void*, enum dma::completion_status_t)>*;                              
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 uint32_t                       channel_number;                 //{ +0x0000    +0x0000    +0x0000    } | .ChannelNumber
        _m01 uint8_t                        initialized;                    //{ +0x0004    +0x0004    +0x0004    } | .Initialized
        _m02 uint8_t                        busy;                           //{ +0x0005    +0x0005    +0x0005    } | .Busy
        _m03 uint8_t                        complete;                       //{ +0x0006    +0x0006    +0x0006    } | .Complete
        _m04 current_completion_routine_t   current_completion_routine;     //{ +0x0008    +0x0008    +0x0008    } | .CurrentCompletionRoutine
        _m05 void*                          current_completion_context;     //{ +0x0010    +0x0010    +0x0010    } | .CurrentCompletionContext
        _m06 struct nt::adapter_object_t*   current_child_adapter;          //{ +0x0018    +0x0018    +0x0018    } | .CurrentChildAdapter
        _m07 enum dma::interrupt_type_t     current_interrupt_type;         //{ +0x0020    +0x0020    +0x0020    } | .CurrentInterruptType
        _m08 struct nt::kdpc_t              dpc;                            //{ +0x0028    +0x0028    +0x0028    } | .Dpc
        _m09 uint8_t                        generates_interrupt;            //{ +0x0068    +0x0068    +0x0068    } | .GeneratesInterrupt
        _m10 int32_t                        gsi;                            //{ +0x006c    +0x006c    +0x006c    } | .Gsi
        _m11 enum nt::kinterrupt_polarity_t interrupt_polarity;             //{ +0x0070    +0x0070    +0x0070    } | .InterruptPolarity
        _m12 enum nt::kinterrupt_mode_t     interrupt_mode;                 //{ +0x0074    +0x0074    +0x0074    } | .InterruptMode
        _m13 uint32_t                       common_buffer_length;           //{ +0x0078    +0x0078    +0x0078    } | .CommonBufferLength
        _m14 void*                          common_buffer_virtual_address;  //{ +0x0080    +0x0080    +0x0080    } | .CommonBufferVirtualAddress
        _m15 int64_t                        common_buffer_logical_address;  //{ +0x0088    +0x0088    +0x0088    } | .CommonBufferLogicalAddress
        _m16 nt::list_entry_t               adapter_queue;                  //{ +0x0090    +0x0090    +0x0090    } | .AdapterQueue
                                                                          
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_CHANNEL.$", 0xa0, true, 0x23eed785800b5a8b );                              
        SDK_FIXED_SIZE( dma_channel_t, 0xa0 );                              
    };                                                                    
};
#include "magic/dma_channel_t.end.hpp"
SDK_VERIFY( struct halp::dma_channel_t, 0xa0 );
