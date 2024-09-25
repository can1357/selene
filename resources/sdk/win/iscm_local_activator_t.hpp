#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISCMLocalActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iscm_local_activator_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ISCMLocalActivator.$", 0x8, true, 0x1c6e3ba077c6546f );
        SDK_FIXED_SIZE( iscm_local_activator_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::iscm_local_activator_t, 0x8 );
