#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_dpc_enqueue_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DPC_ENQUEUE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_dpc_enqueue_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t key;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 int32_t  dpc_queue_depth;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcQueueDepth
        _m02 uint32_t dpc_count;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DpcCount
        _m03 uint32_t target_processor_index;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessorIndex
        _m04 uint8_t  importance;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Importance
                                             
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DPC_ENQUEUE_INFORMATION.$", 0x18, true, 0xcb9c75b4b5d7f994 );                       
        SDK_FIXED_SIZE( perfinfo_dpc_enqueue_information_t, 0x18 );                       
    };                                       
};
#include "magic/perfinfo_dpc_enqueue_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_dpc_enqueue_information_t, 0x18 );
