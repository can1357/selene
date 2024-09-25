#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumContextProps]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_context_props_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IEnumContextProps.$", 0x8, true, 0xf8e4b19f00ddc08d );
        SDK_FIXED_SIZE( i_enum_context_props_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_enum_context_props_t, 0x8 );
