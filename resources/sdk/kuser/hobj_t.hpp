#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [struct HOBJ__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hobj_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "HOBJ__.$", 0x4, true, 0x9edb23e880b2f105 );
        SDK_FIXED_SIZE( hobj_t, 0x4 );
    };           
};
SDK_VERIFY( struct kuser::hobj_t, 0x4 );
