#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLibRegistration]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_registration_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "ITypeLibRegistration.$", 0x8, true, 0xb1f7055614091fed );
        SDK_FIXED_SIZE( i_type_lib_registration_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_type_lib_registration_t, 0x8 );
