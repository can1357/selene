#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [struct _EX_EXTENSION]
    // => WDK 10
    //
    struct extension_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "_EX_EXTENSION.$", 0x0, false, 0x57bca81363f5cdb1 );
        SDK_FIXED_SIZE( extension_t, 0x0 );
    };                
};
SDK_VERIFY( struct ex::extension_t, 0x0 );
