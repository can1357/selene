#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_pnp_device_completion_queue_t.start.hpp"
namespace nt
{
    // [struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_pnp_device_completion_queue_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::list_entry_t dispatched_list;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DispatchedList
                                               
        SDK_MAGIC_PROPERTIES( "_TRIAGE_PNP_DEVICE_COMPLETION_QUEUE.$", 0x10, true, 0xe7654221de38f66b );                
        SDK_FIXED_SIZE( triage_pnp_device_completion_queue_t, 0x10 );                
    };                                         
};
#include "magic/triage_pnp_device_completion_queue_t.end.hpp"
SDK_VERIFY( struct nt::triage_pnp_device_completion_queue_t, 0x10 );
