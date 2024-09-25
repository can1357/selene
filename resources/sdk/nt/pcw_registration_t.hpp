#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PCW_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcw_registration_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_PCW_REGISTRATION.$", 0x0, true, 0xa183e686bb84b39f );
        SDK_FIXED_SIZE( pcw_registration_t, 0x0 );
    };                       
};
SDK_VERIFY( struct nt::pcw_registration_t, 0x0 );
