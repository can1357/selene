#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPerInterfacePSFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_per_interface_ps_factory_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IPerInterfacePSFactory.$", 0x8, true, 0x901a3e501e616d9e );
        SDK_FIXED_SIZE( i_per_interface_ps_factory_t, 0x8 );
    };                                 
};
SDK_VERIFY( struct win::i_per_interface_ps_factory_t, 0x8 );
