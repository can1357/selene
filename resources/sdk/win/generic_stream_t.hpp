#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class GenericStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class generic_stream_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "GenericStream.$", 0x30, true, 0x4d578a48cb915971 );
        SDK_FIXED_SIZE( generic_stream_t, 0x30 );
    };                    
};
SDK_VERIFY( class win::generic_stream_t, 0x30 );
