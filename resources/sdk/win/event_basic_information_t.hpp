#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/event_type_t.hpp"

#include "magic/event_basic_information_t.start.hpp"
namespace win
{
    // [struct _EVENT_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_basic_information_t           
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 enum nt::event_type_t event_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventType
        _m01 int32_t               event_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EventState
                                               
        SDK_MAGIC_PROPERTIES( "_EVENT_BASIC_INFORMATION.$", 0x8, true, 0xddeb72026164ad0a );            
        SDK_FIXED_SIZE( event_basic_information_t, 0x8 );            
    };                                         
};
#include "magic/event_basic_information_t.end.hpp"
SDK_VERIFY( struct win::event_basic_information_t, 0x8 );
