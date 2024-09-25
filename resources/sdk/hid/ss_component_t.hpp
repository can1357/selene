#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [struct SS_COMPONENT__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ss_component_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "SS_COMPONENT__.$", 0x4, true, 0x5c2fafe4e1803536 );
        SDK_FIXED_SIZE( ss_component_t, 0x4 );
    };                   
};
SDK_VERIFY( struct hid::ss_component_t, 0x4 );
