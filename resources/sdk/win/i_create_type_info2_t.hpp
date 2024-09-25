#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateTypeInfo2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_type_info2_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICreateTypeInfo2.$", 0x8, true, 0xb70ef7545751668b );
        SDK_FIXED_SIZE( i_create_type_info2_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_create_type_info2_t, 0x8 );
