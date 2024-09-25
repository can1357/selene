#pragma once
#include <sdkgen/support_library.hpp>

namespace expi
{
    // [struct _EXP_LICENSE_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct license_state_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "_EXP_LICENSE_STATE.$", 0x0, true, 0xecfba877ce1b7297 );
        SDK_FIXED_SIZE( license_state_t, 0x0 );
    };                    
};
SDK_VERIFY( struct expi::license_state_t, 0x0 );
