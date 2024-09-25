#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ComTrace]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_trace_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "ComTrace.$", 0x20, true, 0xd28d5d9830de3ed7 );
        SDK_FIXED_SIZE( com_trace_t, 0x20 );
    };               
};
SDK_VERIFY( class win::com_trace_t, 0x20 );
