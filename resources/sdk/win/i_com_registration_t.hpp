#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComRegistration]
    // => Windows 10 v1607
    //
    struct i_com_registration_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IComRegistration.$", 0x0, false, 0x3fb060387c188bd9 );
        SDK_FIXED_SIZE( i_com_registration_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_com_registration_t, 0x8 );
