#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_unknown_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IUnknown.$", 0x8, true, 0xbe43e7b7bcd438ba );
        SDK_FIXED_SIZE( i_unknown_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_unknown_t, 0x8 );
