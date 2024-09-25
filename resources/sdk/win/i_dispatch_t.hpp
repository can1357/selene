#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDispatch]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_dispatch_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IDispatch.$", 0x8, true, 0x4344c37884ad9028 );
        SDK_FIXED_SIZE( i_dispatch_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_dispatch_t, 0x8 );
