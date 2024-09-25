#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_list_t.hpp"

#include "magic/kdpc_data_t.start.hpp"
namespace nt
{
    struct kdpc_t;

    // [struct _KDPC_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kdpc_data_t                                    
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                
        _m00 struct nt::kdpc_list_t      dpc_list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DpcList
        _m01 uint64_t                    dpc_lock;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DpcLock
        _m02 volatile int32_t            dpc_queue_depth;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DpcQueueDepth
        _m03 uint32_t                    dpc_count;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DpcCount
        _m04 struct nt::kdpc_t volatile* active_dpc;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ActiveDpc
                                                          
        // Windows 11                                     
        //                                                
        _m05 uint32_t                    long_dpc_present;  //{ +0x0028    } | .LongDpcPresent
                                                          
        SDK_MAGIC_PROPERTIES( "_KDPC_DATA.$", 0x28, true, 0x29a85a88d64e96f3 );                 
        SDK_DYNAMIC_SIZE( kdpc_data_t );                  
    };                                                    
};
#include "magic/kdpc_data_t.end.hpp"
