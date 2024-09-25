#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumFORMATETC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_formatetc_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IEnumFORMATETC.$", 0x8, true, 0x60248077a5004f12 );
        SDK_FIXED_SIZE( i_enum_formatetc_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_enum_formatetc_t, 0x8 );
