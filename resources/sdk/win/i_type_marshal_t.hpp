#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeMarshal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_marshal_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "ITypeMarshal.$", 0x8, true, 0xda8d5568b319fd4b );
        SDK_FIXED_SIZE( i_type_marshal_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_type_marshal_t, 0x8 );
