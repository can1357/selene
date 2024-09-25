#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SC_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sc_handle_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "SC_HANDLE__.$", 0x4, true, 0x142303e4e4bd1fe7 );
        SDK_FIXED_SIZE( sc_handle_t, 0x4 );
    };                
};
SDK_VERIFY( struct win::sc_handle_t, 0x4 );
