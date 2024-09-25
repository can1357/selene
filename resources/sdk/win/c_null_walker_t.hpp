#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CNullWalker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_null_walker_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "CNullWalker.$", 0x8, true, 0x4dec36c8991f8e8f );
        SDK_FIXED_SIZE( c_null_walker_t, 0x8 );
    };                   
};
SDK_VERIFY( class win::c_null_walker_t, 0x8 );
