#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/focus_event_record_t.start.hpp"
namespace win
{
    // [struct _FOCUS_EVENT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct focus_event_record_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int32_t b_set_focus;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bSetFocus
                                 
        SDK_MAGIC_PROPERTIES( "_FOCUS_EVENT_RECORD.$", 0x4, true, 0xb6f8e2437aa6a342 );            
        SDK_FIXED_SIZE( focus_event_record_t, 0x4 );            
    };                           
};
#include "magic/focus_event_record_t.end.hpp"
SDK_VERIFY( struct win::focus_event_record_t, 0x4 );
