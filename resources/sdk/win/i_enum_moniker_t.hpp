#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumMoniker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_moniker_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IEnumMoniker.$", 0x8, true, 0x3900bd56dab5ead7 );
        SDK_FIXED_SIZE( i_enum_moniker_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_enum_moniker_t, 0x8 );
