#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_unknown_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IEnumUnknown.$", 0x8, true, 0x17f33e453119f8d6 );
        SDK_FIXED_SIZE( i_enum_unknown_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_enum_unknown_t, 0x8 );
