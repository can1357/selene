#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumSTATPROPSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_statpropstg_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IEnumSTATPROPSTG.$", 0x8, true, 0x5af4ac53b4c2b568 );
        SDK_FIXED_SIZE( i_enum_statpropstg_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_enum_statpropstg_t, 0x8 );
