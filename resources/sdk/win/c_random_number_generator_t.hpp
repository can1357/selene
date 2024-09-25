#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CRandomNumberGenerator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_random_number_generator_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CRandomNumberGenerator.$", 0x1, true, 0x80d683fcf35798d5 );
        SDK_FIXED_SIZE( c_random_number_generator_t, 0x1 );
    };                               
};
SDK_VERIFY( class win::c_random_number_generator_t, 0x1 );
