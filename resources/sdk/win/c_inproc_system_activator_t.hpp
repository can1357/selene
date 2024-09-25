#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CInprocSystemActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_inproc_system_activator_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CInprocSystemActivator.$", 0x8, true, 0x17f04e7115455eeb );
        SDK_FIXED_SIZE( c_inproc_system_activator_t, 0x8 );
    };                               
};
SDK_VERIFY( class win::c_inproc_system_activator_t, 0x8 );
