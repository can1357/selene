#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CClassCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_class_cache_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "CClassCache.$", 0x1, true, 0xe26171b0e2b9f869 );
        SDK_FIXED_SIZE( c_class_cache_t, 0x1 );
    };                   
};
SDK_VERIFY( class win::c_class_cache_t, 0x1 );
