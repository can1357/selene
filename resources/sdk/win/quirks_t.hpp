#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class Quirks]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class quirks_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "Quirks.$", 0x1, true, 0xded77c24e98c926 );
        SDK_FIXED_SIZE( quirks_t, 0x1 );
    };            
};
SDK_VERIFY( class win::quirks_t, 0x1 );
