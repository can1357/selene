#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct OleThunkWOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ole_thunk_wow_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "OleThunkWOW.$", 0x8, true, 0xa5e18285486f750c );
        SDK_FIXED_SIZE( ole_thunk_wow_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::ole_thunk_wow_t, 0x8 );
