#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CMSI_RW_LOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsi_rw_lock_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_CMSI_RW_LOCK.$", 0x8, true, 0x6d8521acabd5976a );
        SDK_FIXED_SIZE( cmsi_rw_lock_t, 0x8 );
    };                   
};
SDK_VERIFY( struct nt::cmsi_rw_lock_t, 0x8 );
