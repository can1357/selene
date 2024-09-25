#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServicesSink]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_services_sink_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IServicesSink.$", 0x8, true, 0x137ead75662a2495 );
        SDK_FIXED_SIZE( i_services_sink_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_services_sink_t, 0x8 );
