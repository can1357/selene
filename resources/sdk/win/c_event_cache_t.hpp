#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CEventCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_event_cache_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "CEventCache.$", 0x1, true, 0x391a49ac100a5c1a );
        SDK_FIXED_SIZE( c_event_cache_t, 0x1 );
    };                   
};
SDK_VERIFY( class win::c_event_cache_t, 0x1 );
