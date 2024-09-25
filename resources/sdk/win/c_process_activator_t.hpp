#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CProcessActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_process_activator_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "CProcessActivator.$", 0x8, true, 0x3837e08b215b7b3d );
        SDK_FIXED_SIZE( c_process_activator_t, 0x8 );
    };                         
};
SDK_VERIFY( class win::c_process_activator_t, 0x8 );
