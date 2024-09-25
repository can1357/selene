#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/k_wait_event_t.start.hpp"
namespace ndis
{
    // [class KWaitEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_wait_event_t                 
    {                                    
        // Windows 10 v1607              
        //                               
        _m00 struct nt::kevent_t m_event;  //{ +0x0000    } | .m_event
                                         
        SDK_MAGIC_PROPERTIES( "KWaitEvent.$", 0x18, true, 0x79de715c4081d4b3 );        
        SDK_FIXED_SIZE( k_wait_event_t, 0x18 );        
    };                                   
};
#include "magic/k_wait_event_t.end.hpp"
SDK_VERIFY( class ndis::k_wait_event_t, 0x18 );
