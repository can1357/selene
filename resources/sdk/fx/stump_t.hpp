#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [struct FxStump]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stump_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "FxStump.$", 0x1, true, 0x5e473de3655ac473 );
        SDK_FIXED_SIZE( stump_t, 0x1 );
    };            
};
SDK_VERIFY( struct fx::stump_t, 0x1 );
