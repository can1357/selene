#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/system_trim_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_TRIM_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_trim_state_t                                  
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                      
        _m00 uint64_t                expansion_lock;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExpansionLock
        _m01 volatile int32_t        trim_in_progress_count;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrimInProgressCount
        _m02 struct nt::kevent_t     periodic_working_set_event;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeriodicWorkingSetEvent
        _m03 sdk::array<uint32_t, 3> trim_all_page_fault_count;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TrimAllPageFaultCount
                                                                
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_TRIM_STATE.$", 0x40, true, 0xf7eba09f0da80ea6 );                           
        SDK_FIXED_SIZE( system_trim_state_t, 0x40 );                           
    };                                                          
};
#include "magic/system_trim_state_t.end.hpp"
SDK_VERIFY( struct mi::system_trim_state_t, 0x40 );
