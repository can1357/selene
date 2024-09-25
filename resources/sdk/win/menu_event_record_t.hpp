#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/menu_event_record_t.start.hpp"
namespace win
{
    // [struct _MENU_EVENT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menu_event_record_t      
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t dw_command_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCommandId
                                    
        SDK_MAGIC_PROPERTIES( "_MENU_EVENT_RECORD.$", 0x4, true, 0x623b46c0890c881a );              
        SDK_FIXED_SIZE( menu_event_record_t, 0x4 );              
    };                              
};
#include "magic/menu_event_record_t.end.hpp"
SDK_VERIFY( struct win::menu_event_record_t, 0x4 );
