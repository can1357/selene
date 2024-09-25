#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CBaseCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_base_call_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "CBaseCall.$", 0x18, true, 0x5d03212d89f28434 );
        SDK_FIXED_SIZE( c_base_call_t, 0x18 );
    };                 
};
SDK_VERIFY( class win::c_base_call_t, 0x18 );
