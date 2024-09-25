#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CApartmentActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_apartment_activator_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "CApartmentActivator.$", 0x8, true, 0xda48a51f868c1bdb );
        SDK_FIXED_SIZE( c_apartment_activator_t, 0x8 );
    };                           
};
SDK_VERIFY( class win::c_apartment_activator_t, 0x8 );
