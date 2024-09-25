#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class AllocationWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class allocation_wrapper_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "AllocationWrapper.$", 0x1, true, 0x9cbdb6f74674947c );
        SDK_FIXED_SIZE( allocation_wrapper_t, 0x1 );
    };                        
};
SDK_VERIFY( class win::allocation_wrapper_t, 0x1 );
