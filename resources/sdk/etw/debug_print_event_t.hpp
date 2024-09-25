#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_print_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_DEBUG_PRINT_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_print_event_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                 
        _m00 uint32_t            component;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Component
        _m01 uint32_t            level;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Level
        _m02 sdk::array<char, 1> message;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Message
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_DEBUG_PRINT_EVENT.$", 0xc, true, 0x14d59fae810b9ab7 );          
        SDK_FIXED_SIZE( debug_print_event_t, 0xc );          
    };                                     
};
#include "magic/debug_print_event_t.end.hpp"
SDK_VERIFY( struct etw::debug_print_event_t, 0xc );
