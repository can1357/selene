#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/critsec_event_collision_t.start.hpp"
namespace etw
{
    // [struct _ETW_CRITSEC_EVENT_COLLISION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct critsec_event_collision_t                         
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 struct win::system_trace_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          lock_count;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LockCount
        _m02 uint32_t                          spin_count;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SpinCount
        _m03 void*                             owning_thread;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OwningThread
        _m04 void*                             address;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Address
                                                             
        SDK_MAGIC_PROPERTIES( "_ETW_CRITSEC_EVENT_COLLISION.$", 0x38, true, 0x6b281886c1c8a099 );              
        SDK_FIXED_SIZE( critsec_event_collision_t, 0x38 );              
    };                                                       
};
#include "magic/critsec_event_collision_t.end.hpp"
SDK_VERIFY( struct etw::critsec_event_collision_t, 0x38 );
