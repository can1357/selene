#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _SC_NOTIFICATION_REGISTRATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sc_notification_registration_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "_SC_NOTIFICATION_REGISTRATION.$", 0x0, true, 0xd37c96c79967f873 );
        SDK_FIXED_SIZE( sc_notification_registration_t, 0x0 );
    };                                   
};
SDK_VERIFY( struct win::sc_notification_registration_t, 0x0 );
