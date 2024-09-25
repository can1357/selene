#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExceptionNotification]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_exception_notification_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IExceptionNotification.$", 0x8, true, 0xec469d35cd7101da );
        SDK_FIXED_SIZE( i_exception_notification_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_exception_notification_t, 0x8 );
