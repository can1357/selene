#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumSTATSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_statstg_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IEnumSTATSTG.$", 0x8, true, 0x4c7bd82aecbaf3fb );
        SDK_FIXED_SIZE( i_enum_statstg_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_enum_statstg_t, 0x8 );
