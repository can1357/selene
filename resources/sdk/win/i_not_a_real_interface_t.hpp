#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct INotARealInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_not_a_real_interface_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "INotARealInterface.$", 0x8, true, 0x1eaabc953dc923ea );
        SDK_FIXED_SIZE( i_not_a_real_interface_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_not_a_real_interface_t, 0x8 );
