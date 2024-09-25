#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IApartmentShutdown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_apartment_shutdown_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IApartmentShutdown.$", 0x8, true, 0x1ecdfa4b849ec472 );
        SDK_FIXED_SIZE( i_apartment_shutdown_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_apartment_shutdown_t, 0x8 );
