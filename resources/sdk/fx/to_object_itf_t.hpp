#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [class FxToObjectItf]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class to_object_itf_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "FxToObjectItf.$", 0x1, true, 0xd5b6b59f49539bbb );
        SDK_FIXED_SIZE( to_object_itf_t, 0x1 );
    };                   
};
SDK_VERIFY( class fx::to_object_itf_t, 0x1 );
