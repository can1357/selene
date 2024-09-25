#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRemUnknown2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rem_unknown2_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IRemUnknown2.$", 0x8, true, 0xe159a967f61daf3c );
        SDK_FIXED_SIZE( i_rem_unknown2_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_rem_unknown2_t, 0x8 );
