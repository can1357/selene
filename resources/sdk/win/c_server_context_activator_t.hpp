#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CServerContextActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_server_context_activator_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "CServerContextActivator.$", 0x8, true, 0x404501736e0c836e );
        SDK_FIXED_SIZE( c_server_context_activator_t, 0x8 );
    };                                
};
SDK_VERIFY( class win::c_server_context_activator_t, 0x8 );
