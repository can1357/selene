#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/event_t.hpp"

#include "magic/cr_event_t.start.hpp"
namespace fx
{
    // [struct FxCREvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cr_event_t                  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 class mx::event_t m_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Event
                                       
        SDK_MAGIC_PROPERTIES( "FxCREvent.$", 0x20, true, 0xe3064f115013d1d1 );        
        SDK_FIXED_SIZE( cr_event_t, 0x20 );        
    };                                 
};
#include "magic/cr_event_t.end.hpp"
SDK_VERIFY( struct fx::cr_event_t, 0x20 );
