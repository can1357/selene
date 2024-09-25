#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_registration_token_t.start.hpp"
namespace win
{
    // [struct EventRegistrationToken]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_registration_token_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int64_t value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .value
                                     
        SDK_MAGIC_PROPERTIES( "EventRegistrationToken.$", 0x8, true, 0x6d9d0091403fa04 );      
        SDK_FIXED_SIZE( event_registration_token_t, 0x8 );      
    };                               
};
#include "magic/event_registration_token_t.end.hpp"
SDK_VERIFY( struct win::event_registration_token_t, 0x8 );
