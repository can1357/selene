#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLibRegistrationReader]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_registration_reader_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "ITypeLibRegistrationReader.$", 0x8, true, 0x1ecbcf6a3e4e0b7f );
        SDK_FIXED_SIZE( i_type_lib_registration_reader_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_type_lib_registration_reader_t, 0x8 );
