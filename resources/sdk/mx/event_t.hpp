#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/event_t.start.hpp"
namespace mx
{
    // [class MxEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class event_t                                          
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                 
        _m00 struct nt::kevent_t m_event;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Event
        _m01 uint8_t             m_dbg_flag_is_initialized;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_DbgFlagIsInitialized
                                                           
        SDK_MAGIC_PROPERTIES( "MxEvent.$", 0x20, true, 0x5f23b4e69bee770a );                          
        SDK_FIXED_SIZE( event_t, 0x20 );                          
    };                                                     
};
#include "magic/event_t.end.hpp"
SDK_VERIFY( class mx::event_t, 0x20 );
