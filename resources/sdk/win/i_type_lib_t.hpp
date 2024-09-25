#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLib]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "ITypeLib.$", 0x8, true, 0x7bdb79e65550d386 );
        SDK_FIXED_SIZE( i_type_lib_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_type_lib_t, 0x8 );
