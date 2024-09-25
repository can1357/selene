#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CClientContextActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_client_context_activator_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "CClientContextActivator.$", 0x8, true, 0xad962a367bfb435e );
        SDK_FIXED_SIZE( c_client_context_activator_t, 0x8 );
    };                                
};
SDK_VERIFY( class win::c_client_context_activator_t, 0x8 );
