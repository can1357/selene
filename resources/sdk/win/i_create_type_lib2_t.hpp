#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateTypeLib2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_type_lib2_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ICreateTypeLib2.$", 0x8, true, 0x5b40e286184e71fa );
        SDK_FIXED_SIZE( i_create_type_lib2_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_create_type_lib2_t, 0x8 );
