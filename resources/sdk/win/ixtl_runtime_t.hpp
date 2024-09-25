#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXTLRuntime]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixtl_runtime_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IXTLRuntime.$", 0x8, true, 0xcfe90a9bf370ac17 );
        SDK_FIXED_SIZE( ixtl_runtime_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::ixtl_runtime_t, 0x8 );
