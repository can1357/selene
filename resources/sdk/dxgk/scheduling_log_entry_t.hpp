#pragma once
#include <sdkgen/support_library.hpp>
#include "scheduling_log_context_state_change_t.hpp"

#include "magic/scheduling_log_entry_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SCHEDULING_LOG_ENTRY]
    // => WDK 10 (NV)
    //
    struct scheduling_log_entry_t                                 
    {                                                             
        using context_state_change_t = struct dxgk::scheduling_log_context_state_change_t;                             
                                                                  
        // WDK 10                                                 
        //                                                        
        _m00 uint64_t                gpu_time_stamp;                //{ +0x0000    } | .GpuTimeStamp
        _m01 uint32_t                operation_type;                //{ +0x0008@0  } | .OperationType
        _m02 uint32_t                reserved_operation_type_bits;  //{ +0x000c@0  } | .ReservedOperationTypeBits
        _m03 context_state_change_t  context_state_change;          //{ +0x0010    } | .ContextStateChange
        _m04 sdk::array<uint64_t, 2> reserved_operation_data;       //{ +0x0010    } | .ReservedOperationData
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_SCHEDULING_LOG_ENTRY.$", 0x0, false, 0xb20657a3d84bf20e );                             
        SDK_FIXED_SIZE( scheduling_log_entry_t, 0x20 );                             
    };                                                            
};
#include "magic/scheduling_log_entry_t.end.hpp"
SDK_VERIFY( struct dxgk::scheduling_log_entry_t, 0x20 );
