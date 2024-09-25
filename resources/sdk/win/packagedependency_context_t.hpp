#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct PACKAGEDEPENDENCY_CONTEXT__]
    // => Windows 11
    //
    struct packagedependency_context_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "PACKAGEDEPENDENCY_CONTEXT__.$", 0x0, false, 0x304b847e40b11402 );
        SDK_FIXED_SIZE( packagedependency_context_t, 0x4 );
    };                                
};
SDK_VERIFY( struct win::packagedependency_context_t, 0x4 );
