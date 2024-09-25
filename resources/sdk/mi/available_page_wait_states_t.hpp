#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/available_page_wait_states_t.start.hpp"
namespace mi
{
    // [struct _MI_AVAILABLE_PAGE_WAIT_STATES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct available_page_wait_states_t     
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 struct nt::kevent_t event;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
        _m01 uint32_t            event_sets;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EventSets
                                            
        SDK_MAGIC_PROPERTIES( "_MI_AVAILABLE_PAGE_WAIT_STATES.$", 0x20, true, 0xe9f00efb943e039f );           
        SDK_FIXED_SIZE( available_page_wait_states_t, 0x20 );           
    };                                      
};
#include "magic/available_page_wait_states_t.end.hpp"
SDK_VERIFY( struct mi::available_page_wait_states_t, 0x20 );
