#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class allocateExtra_t]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class allocate_extra_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "allocateExtra_t.$", 0x1, true, 0xfc2771e0707f6787 );
        SDK_FIXED_SIZE( allocate_extra_t, 0x1 );
    };                    
};
SDK_VERIFY( class win::allocate_extra_t, 0x1 );
