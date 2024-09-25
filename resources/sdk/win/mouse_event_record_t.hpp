#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"

#include "magic/mouse_event_record_t.start.hpp"
namespace win
{
    // [struct _MOUSE_EVENT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mouse_event_record_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                            
        _m00 struct win::coord_t dw_mouse_position;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMousePosition
        _m01 uint32_t            dw_button_state;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwButtonState
        _m02 uint32_t            dw_control_key_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwControlKeyState
        _m03 uint32_t            dw_event_flags;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwEventFlags
                                                      
        SDK_MAGIC_PROPERTIES( "_MOUSE_EVENT_RECORD.$", 0x10, true, 0xed14c67c22508bde );                     
        SDK_FIXED_SIZE( mouse_event_record_t, 0x10 );                     
    };                                                
};
#include "magic/mouse_event_record_t.end.hpp"
SDK_VERIFY( struct win::mouse_event_record_t, 0x10 );
