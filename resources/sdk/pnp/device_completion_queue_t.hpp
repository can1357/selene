#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ksemaphore_t.hpp"

#include "magic/device_completion_queue_t.start.hpp"
namespace pnp
{
    // [struct _PNP_DEVICE_COMPLETION_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_completion_queue_t                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 nt::list_entry_t        dispatched_list;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DispatchedList
        _m01 uint32_t                dispatched_count;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DispatchedCount
        _m02 nt::list_entry_t        completed_list;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletedList
        _m03 struct nt::ksemaphore_t completed_semaphore;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CompletedSemaphore
        _m04 uint64_t                spin_lock;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SpinLock
                                                         
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_COMPLETION_QUEUE.$", 0x50, true, 0x43871927b8af0c98 );                    
        SDK_FIXED_SIZE( device_completion_queue_t, 0x50 );                    
    };                                                   
};
#include "magic/device_completion_queue_t.end.hpp"
SDK_VERIFY( struct pnp::device_completion_queue_t, 0x50 );
