#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreatePerInterfacePSFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_per_interface_ps_factory_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "ICreatePerInterfacePSFactory.$", 0x8, true, 0x8a06bcd7fed31c9 );
        SDK_FIXED_SIZE( i_create_per_interface_ps_factory_t, 0x8 );
    };                                        
};
SDK_VERIFY( struct win::i_create_per_interface_ps_factory_t, 0x8 );
