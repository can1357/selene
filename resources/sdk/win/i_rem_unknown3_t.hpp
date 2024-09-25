#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRemUnknown3]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rem_unknown3_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IRemUnknown3.$", 0x8, true, 0x511f2d82c193bd22 );
        SDK_FIXED_SIZE( i_rem_unknown3_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_rem_unknown3_t, 0x8 );
