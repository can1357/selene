#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ContainerSynchronization]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class container_synchronization_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "ContainerSynchronization.$", 0x1, true, 0xc62963cc51ec8883 );
        SDK_FIXED_SIZE( container_synchronization_t, 0x1 );
    };                               
};
SDK_VERIFY( class win::container_synchronization_t, 0x1 );
