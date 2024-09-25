#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/k_wait_event_base_t.start.hpp"
namespace ndis
{
    // [class KWaitEventBase]
    // => Windows 10 v1607
    //
    class k_wait_event_base_t            
    {                                    
        // Windows 10 v1607              
        //                               
        _m00 struct nt::kevent_t m_event;  //{ +0x0000    } | .m_event
                                         
        SDK_MAGIC_PROPERTIES( "KWaitEventBase.$", 0x0, false, 0x80cc0a7a7542c025 );        
        SDK_FIXED_SIZE( k_wait_event_base_t, 0x18 );        
    };                                   
};
#include "magic/k_wait_event_base_t.end.hpp"
SDK_VERIFY( class ndis::k_wait_event_base_t, 0x18 );
