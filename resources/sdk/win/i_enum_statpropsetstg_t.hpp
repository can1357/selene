#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumSTATPROPSETSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_statpropsetstg_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IEnumSTATPROPSETSTG.$", 0x8, true, 0x189f3b766ba8a918 );
        SDK_FIXED_SIZE( i_enum_statpropsetstg_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_enum_statpropsetstg_t, 0x8 );
