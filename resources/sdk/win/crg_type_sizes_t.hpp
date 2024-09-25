#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CRGTypeSizes]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class crg_type_sizes_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "CRGTypeSizes.$", 0x1, true, 0x2900ff9ba7fb96fb );
        SDK_FIXED_SIZE( crg_type_sizes_t, 0x1 );
    };                    
};
SDK_VERIFY( class win::crg_type_sizes_t, 0x1 );
