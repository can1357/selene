#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDLLHost]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idll_host_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IDLLHost.$", 0x8, true, 0x83a666d25fe90de2 );
        SDK_FIXED_SIZE( idll_host_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::idll_host_t, 0x8 );
