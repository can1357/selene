#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLib2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib2_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "ITypeLib2.$", 0x8, true, 0x11f3f23d313baa44 );
        SDK_FIXED_SIZE( i_type_lib2_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_type_lib2_t, 0x8 );
