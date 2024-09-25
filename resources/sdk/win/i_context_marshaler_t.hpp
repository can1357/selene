#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IContextMarshaler]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_context_marshaler_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IContextMarshaler.$", 0x8, true, 0xfd471f8c5a755e78 );
        SDK_FIXED_SIZE( i_context_marshaler_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_context_marshaler_t, 0x8 );
