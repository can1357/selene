#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct PEPHANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pephandle_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "PEPHANDLE__.$", 0x4, true, 0xcc95ec0bdbfa67cf );
        SDK_FIXED_SIZE( pephandle_t, 0x4 );
    };                
};
SDK_VERIFY( struct nt::pephandle_t, 0x4 );
