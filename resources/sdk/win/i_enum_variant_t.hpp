#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumVARIANT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_variant_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IEnumVARIANT.$", 0x8, true, 0xa1a200704f5424d1 );
        SDK_FIXED_SIZE( i_enum_variant_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_enum_variant_t, 0x8 );
