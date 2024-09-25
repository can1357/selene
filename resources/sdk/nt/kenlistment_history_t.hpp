#pragma once
#include <sdkgen/support_library.hpp>
#include "kenlistment_state_t.hpp"

#include "magic/kenlistment_history_t.start.hpp"
namespace nt
{
    // [struct _KENLISTMENT_HISTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kenlistment_history_t                       
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 uint32_t                     notification;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Notification
        _m01 enum nt::kenlistment_state_t new_state;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NewState
                                                       
        SDK_MAGIC_PROPERTIES( "_KENLISTMENT_HISTORY.$", 0x8, true, 0x80b3c09e108424e1 );             
        SDK_FIXED_SIZE( kenlistment_history_t, 0x8 );             
    };                                                 
};
#include "magic/kenlistment_history_t.end.hpp"
SDK_VERIFY( struct nt::kenlistment_history_t, 0x8 );
