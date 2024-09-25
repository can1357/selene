#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAbandonmentNotification]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_abandonment_notification_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IAbandonmentNotification.$", 0x8, true, 0x1ca1aaa20a57ddef );
        SDK_FIXED_SIZE( i_abandonment_notification_t, 0x8 );
    };                                 
};
SDK_VERIFY( struct win::i_abandonment_notification_t, 0x8 );
