#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMarshalOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_marshal_options_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IMarshalOptions.$", 0x8, true, 0x2252788c95242400 );
        SDK_FIXED_SIZE( i_marshal_options_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_marshal_options_t, 0x8 );
