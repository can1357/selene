#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidschcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIDSCHCAPS]
    // => WDK 10 (NV)
    //
    struct vidschcaps_t                        
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint1_t  multi_engine_aware;        //{ +0x0000@0  } | .MultiEngineAware
        _m01 uint1_t  v_sync_power_save_aware;   //{ +0x0000@1  } | .VSyncPowerSaveAware
        _m02 uint1_t  preemption_aware;          //{ +0x0000@2  } | .PreemptionAware
        _m03 uint1_t  no_dma_patching;           //{ +0x0000@3  } | .NoDmaPatching
        _m04 uint1_t  cancel_command_aware;      //{ +0x0000@4  } | .CancelCommandAware
        _m05 uint1_t  no64_bit_atomics;          //{ +0x0000@5  } | .No64BitAtomics
        _m06 uint1_t  low_irql_preempt_command;  //{ +0x0000@6  } | .LowIrqlPreemptCommand
        _m07 uint4_t  hw_queue_packet_cap;       //{ +0x0000@7  } | .HwQueuePacketCap
        _m08 uint32_t value;                     //{ +0x0000    } | .Value
                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_VIDSCHCAPS.$", 0x0, false, 0xf54d7d907bc2a6 );                         
        SDK_FIXED_SIZE( vidschcaps_t, 0x4 );                         
    };                                         
};
#include "magic/vidschcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::vidschcaps_t, 0x4 );
