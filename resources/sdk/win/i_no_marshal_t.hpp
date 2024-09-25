#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct INoMarshal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_no_marshal_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "INoMarshal.$", 0x8, true, 0x9d34336284bde137 );
        SDK_FIXED_SIZE( i_no_marshal_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_no_marshal_t, 0x8 );
