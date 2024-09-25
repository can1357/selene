#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_dpc_enqueue_information_v2_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DPC_ENQUEUE_INFORMATION_V2]
    // => Windows 11
    //
    struct perfinfo_dpc_enqueue_information_v2_t
    {                                           
        // Windows 11                        
        //                                   
        _m00 uint64_t key;                        //{ +0x0000    } | .Key
        _m01 int32_t  dpc_queue_depth;            //{ +0x0008    } | .DpcQueueDepth
        _m02 uint32_t dpc_count;                  //{ +0x000c    } | .DpcCount
        _m03 uint32_t target_processor_index;     //{ +0x0010    } | .TargetProcessorIndex
        _m04 uint8_t  importance;                 //{ +0x0014    } | .Importance
        _m05 uint64_t dpc_runtime;                //{ +0x0018    } | .DpcRuntime
                                                
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DPC_ENQUEUE_INFORMATION_V2.$", 0x0, false, 0x41edeabeaad5b33a );                       
        SDK_FIXED_SIZE( perfinfo_dpc_enqueue_information_v2_t, 0x20 );                       
    };                                          
};
#include "magic/perfinfo_dpc_enqueue_information_v2_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_dpc_enqueue_information_v2_t, 0x20 );
