#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStdMarshalInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_std_marshal_info_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IStdMarshalInfo.$", 0x8, true, 0x76a59b97f6e807f5 );
        SDK_FIXED_SIZE( i_std_marshal_info_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_std_marshal_info_t, 0x8 );
