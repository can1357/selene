#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLibRegistrationIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_registration_iterator_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "ITypeLibRegistrationIterator.$", 0x8, true, 0x47d4c5a38f520805 );
        SDK_FIXED_SIZE( i_type_lib_registration_iterator_t, 0x8 );
    };                                       
};
SDK_VERIFY( struct win::i_type_lib_registration_iterator_t, 0x8 );
