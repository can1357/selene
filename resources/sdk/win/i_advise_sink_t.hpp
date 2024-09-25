#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAdviseSink]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_advise_sink_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IAdviseSink.$", 0x8, true, 0x747c22d6a073bb53 );
        SDK_FIXED_SIZE( i_advise_sink_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_advise_sink_t, 0x8 );
