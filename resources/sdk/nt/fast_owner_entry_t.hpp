#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _FAST_OWNER_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_owner_entry_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_FAST_OWNER_ENTRY.$", 0x48, true, 0x23863a8bc65f6a3e );
        SDK_FIXED_SIZE( fast_owner_entry_t, 0x48 );
    };                       
};
SDK_VERIFY( struct nt::fast_owner_entry_t, 0x48 );
