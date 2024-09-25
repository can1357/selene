#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumString]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_string_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IEnumString.$", 0x8, true, 0xef4900a8726a50f5 );
        SDK_FIXED_SIZE( i_enum_string_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_enum_string_t, 0x8 );
