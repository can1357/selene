#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServicesSink2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_services_sink2_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IServicesSink2.$", 0x8, true, 0x8a0a61b770b883ec );
        SDK_FIXED_SIZE( i_services_sink2_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_services_sink2_t, 0x8 );
