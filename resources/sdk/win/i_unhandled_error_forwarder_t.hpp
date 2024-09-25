#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUnhandledErrorForwarder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_unhandled_error_forwarder_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IUnhandledErrorForwarder.$", 0x8, true, 0xe605575fcc881488 );
        SDK_FIXED_SIZE( i_unhandled_error_forwarder_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_unhandled_error_forwarder_t, 0x8 );
