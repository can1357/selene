#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _AWEINFO]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct aweinfo_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "_AWEINFO.$", 0x0, true, 0x4a297924a107108d );
        SDK_FIXED_SIZE( aweinfo_t, 0x0 );
    };              
};
SDK_VERIFY( struct nt::aweinfo_t, 0x0 );
