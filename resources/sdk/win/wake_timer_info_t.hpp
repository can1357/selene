#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/diagnostic_buffer_t.hpp"

#include "magic/wake_timer_info_t.start.hpp"
namespace win
{
    // [struct _WAKE_TIMER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_timer_info_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 uint64_t                       offset_to_next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetToNext
        _m01 uint64_t                       due_time;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DueTime
        _m02 uint32_t                       period;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Period
        _m03 struct nt::diagnostic_buffer_t reason_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReasonContext
                                                           
        SDK_MAGIC_PROPERTIES( "_WAKE_TIMER_INFO.$", 0x40, true, 0xcb3d7fc9bc57cf61 );               
        SDK_FIXED_SIZE( wake_timer_info_t, 0x40 );               
    };                                                     
};
#include "magic/wake_timer_info_t.end.hpp"
SDK_VERIFY( struct win::wake_timer_info_t, 0x40 );
