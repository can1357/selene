#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IParseDisplayName]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_parse_display_name_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IParseDisplayName.$", 0x8, true, 0x245e38e90650ac76 );
        SDK_FIXED_SIZE( i_parse_display_name_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_parse_display_name_t, 0x8 );
