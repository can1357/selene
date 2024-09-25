#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComServices2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_services2_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IComServices2.$", 0x8, true, 0xdf31cec60837a678 );
        SDK_FIXED_SIZE( i_com_services2_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_com_services2_t, 0x8 );
