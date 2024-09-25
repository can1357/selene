#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateTypeLib]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_type_lib_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "ICreateTypeLib.$", 0x8, true, 0x1630e4482bb9f926 );
        SDK_FIXED_SIZE( i_create_type_lib_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_create_type_lib_t, 0x8 );
